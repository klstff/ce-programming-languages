#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "SyntaticAnalysis.h"

SyntaticAnalysis::SyntaticAnalysis(LexicalAnalysis& lex):
m_lex(lex), m_current(lex.nextToken()) {
}

SyntaticAnalysis::~SyntaticAnalysis() {
}

void SyntaticAnalysis::start(){
	procCode();
	eat(TT_END_OF_FILE);
}

void SyntaticAnalysis::advance() {
	m_current = m_lex.nextToken();
}

void SyntaticAnalysis::eat(enum TokenType type) {
	std::cout << "Expected (..., " << tt2str(type)
			<<  "), found (\"" + m_current.token << "\", "
			<< tt2str(m_current.type) << ")" << std::endl;

	if (type == m_current.type) {
		advance();
	} else {
		showError();
	}
}

void SyntaticAnalysis::showError() {
	std::cout << std::setw(2) << std::setfill('0') << m_lex.line() << ": ";

	switch (m_current.type) {
		case TT_INVALID_TOKEN:
			std::cout << "Lexema inválido [" << m_current.token << "]" << std::endl;
			break;
		case TT_UNEXPECTED_EOF:
		case TT_END_OF_FILE:
			std::cout << "Fim de arquivo inesperado" << std::endl;
			break;
		default:
			std::cout << "Lexema não esperado [" << m_current.token << "]" << std::endl;
			break;
	}

	exit(1);
}

// <code> ::= { <cmd> }
void SyntaticAnalysis::procCode() {
	while(m_current.type == TT_IF || m_current.type == TT_UNLESS || m_current.type == TT_WHILE ||
		  m_current.type == TT_UNTIL || m_current.type == TT_FOR || m_current.type == TT_PUTS  ||
		  m_current.type == TT_PRINT || m_current.type == TT_VAR || m_current.type == TT_OPEN_PAR){
			  procCmd();
	}
}

// <cmd> ::= <if> | <unless> | <while> | <until> | <for> | <output> | <assign>
void SyntaticAnalysis::procCmd() {
	if(m_current.type == TT_IF)
		procIf();
	else if(m_current.type == TT_UNLESS)
		procUnless();
	else if(m_current.type == TT_WHILE)
		procWhile();
	else if(m_current.type == TT_UNTIL)
		procUntil();
	else if(m_current.type == TT_FOR)
		procFor();
	else if(m_current.type == TT_PUTS || m_current.type == TT_PRINT)
		procOutput();
	else if(m_current.type == TT_VAR || m_current.type == TT_OPEN_PAR)
		procAssign();
	else
		showError();
}

// <if> ::= if <boolexpr> [ then ] <code> { elsif <boolexpr> [ then ] <code> } [ else <code> ] end
void SyntaticAnalysis::procIf() {
	eat(TT_IF);
	procBoolExpr();

	if(m_current.type == TT_THEN)
		advance();

	procCode();

	while(m_current.type == TT_ELSIF){
		advance();
		procBoolExpr();
		if(m_current.type == TT_THEN)
			advance();
		procCode();
	}

	if(m_current.type == TT_ELSE){
		advance();
		procCode();
	}

	eat(TT_END);
}

// <unless> ::= unless <boolexpr> [ then ] <code> [ else <code> ] end
void SyntaticAnalysis::procUnless() {
	eat(TT_UNLESS);
	procBoolExpr();

	if(m_current.type == TT_THEN)
		advance();

	procCode();

	if(m_current.type == TT_ELSE){
		advance();
		procCode();
	}

	eat(TT_END);
}

// <while> ::= while <boolexpr> [ do ] <code> end
void SyntaticAnalysis::procWhile() {
	eat(TT_WHILE);
	procBoolExpr();

	if(m_current.type == TT_DO)
		advance();

	procCode();
	eat(TT_END);
}

// <until> ::= until <boolexpr> [ do ] <code> end
void SyntaticAnalysis::procUntil() {
	eat(TT_UNTIL);
	procBoolExpr();

	if(m_current.type == TT_DO)
		advance();

	procCode();
	eat(TT_END);
}

// <for> ::= for <id> in <expr> [ do ] <code> end
void SyntaticAnalysis::procFor() {
	eat(TT_FOR);
	procId();
	eat(TT_IN);
	procExpr();

	if(m_current.type == TT_DO)
		advance();

	procCode();
	eat(TT_END);
}

// <output> ::= ( puts | print ) [ <expr> ] [ <post> ] ';'
void SyntaticAnalysis::procOutput() {
	if(m_current.type == TT_PUTS)
		advance();
	else if(m_current.type == TT_PRINT)
		advance();
	else
		showError();

	if(m_current.type == TT_ADD || m_current.type == TT_SUB  || m_current.type == TT_NUMBER ||
	   m_current.type == TT_STR || m_current.type == TT_GETS || m_current.type == TT_RAND   ||
	   m_current.type == TT_VAR ||  m_current.type == TT_OPEN_PAR || m_current.type == TT_OPEN_BR){
		   procExpr();
	}

	if(m_current.type == TT_IF || m_current.type == TT_UNLESS)
		procPost();

	eat(TT_SEMICOLON);
}

// <assign> ::= <access> { ',' <access> } '=' <expr> { ',' <expr> } [ <post> ] ';'
void SyntaticAnalysis::procAssign() {
	procAccess();

	while(m_current.type == TT_COMMA){
		advance();
		procAccess();
	}

	eat(TT_ASSIGN);
	procExpr();

	while(m_current.type == TT_COMMA){
		advance();
		procExpr();
	}

	if(m_current.type == TT_IF || m_current.type == TT_UNLESS)
		procPost();

	eat(TT_SEMICOLON);
}

// <post> ::= ( if | unless ) <boolexpr>
void SyntaticAnalysis::procPost() {
	if(m_current.type == TT_IF)
		advance();
	else if(m_current.type == TT_UNLESS)
		advance();
	else
		showError();

	procBoolExpr();
}

// <boolexpr> ::= [ not ] <cmpexpr> [ (and | or) <boolexpr> ]
void SyntaticAnalysis::procBoolExpr() {
	if(m_current.type == TT_NOT)
		advance();

	procCmpExpr();

	if(m_current.type == TT_AND || m_current.type == TT_OR)
		procBoolExpr();
}

// <cmpexpr> ::= <expr> ( '==' | '!=' | '<' | '<=' | '>' | '>=' | '===' ) <expr>
void SyntaticAnalysis::procCmpExpr() {
	procExpr();

	if(m_current.type == TT_NOT_EQUAL   || m_current.type == TT_EQUAL   || m_current.type == TT_LOWER ||
	   m_current.type == TT_LOWER_EQUAL || m_current.type == TT_GREATER || m_current.type == TT_GREATER_EQUAL ||
	   m_current.type == TT_CONTAINS){
		advance();
	} else {
		showError();
	}

	procExpr();
}

// <expr> ::= <arith> [ ( '..' | '...' ) <arith> ]
void SyntaticAnalysis::procExpr() {
	procArith();

	if(m_current.type == TT_FINC || m_current.type == TT_FEXC){
		advance();
		procArith();
	}
}

// <arith> ::= <term> { ('+' | '-') <term> }
void SyntaticAnalysis::procArith() {
	procTerm();

	while (m_current.type == TT_ADD || m_current.type == TT_SUB){
		advance();
		procTerm();
	}
}

// <term> ::= <power> { ('*' | '/' | '%') <power> }
void SyntaticAnalysis::procTerm() {
	procPower();

	while(m_current.type == TT_MUL || m_current.type == TT_DIV || m_current.type == TT_MOD){
		advance();
		procPower();
	}
}

// <power> ::= <factor> { '**' <factor> }
void SyntaticAnalysis::procPower() {
	procFactor();

	while(m_current.type == TT_EXP){
		advance();
		procFactor();
	}
}

// <factor> ::= [ '+' | '-' ] ( <const> | <input> | <access> ) [ <function> ]
void SyntaticAnalysis::procFactor() {
	if(m_current.type == TT_ADD || m_current.type == TT_SUB)
		advance();

	if(m_current.type == TT_NUMBER || m_current.type == TT_STR  || m_current.type == TT_OPEN_BR)
		procConst();
	else if(m_current.type == TT_GETS   || m_current.type == TT_RAND)
		procInput();
	else if(m_current.type == TT_VAR || m_current.type == TT_OPEN_PAR)
		procAccess();
	else
		showError();

	if(m_current.type == TT_DOT)
		procFunction();
}

// <const> ::= <integer> | <string> | <array>
void SyntaticAnalysis::procConst() {
	if(m_current.type == TT_NUMBER)
		procNumber();
	else if(m_current.type == TT_STR)
		procString();
	else if(m_current.type == TT_OPEN_BR)
		procArray();
	else
		showError();
}

// <input> ::= gets | rand
void SyntaticAnalysis::procInput() {
	if(m_current.type == TT_GETS)
		eat(TT_GETS);
	else if(m_current.type == TT_RAND)
		eat(TT_RAND);
	else
		showError();
}

// <array> ::= '[' [ <expr> { ',' <expr> } ] ']'
void SyntaticAnalysis::procArray() {
	eat(TT_OPEN_BR);

	if(m_current.type == TT_ADD || m_current.type == TT_SUB  || m_current.type == TT_NUMBER ||
	   m_current.type == TT_STR || m_current.type == TT_GETS || m_current.type == TT_RAND   ||
	   m_current.type == TT_VAR ||  m_current.type == TT_OPEN_PAR || m_current.type == TT_OPEN_BR){
		   procExpr();
		   while(m_current.type == TT_COMMA){
			   advance();
			   procExpr();
		   }
	}
	eat(TT_CLOSE_BR);
}

// <access> ::= ( <id> | '(' <expr> ')' ) [ '[' <expr> ']' ]
void SyntaticAnalysis::procAccess() {
	if(m_current.type == TT_VAR){
		procId();
	} else if(m_current.type == TT_OPEN_PAR){
		eat(TT_OPEN_PAR);
		procExpr();
		eat(TT_CLOSE_PAR);
	} else {
		showError();
	}

	if(m_current.type == TT_OPEN_BR){
		eat(TT_OPEN_BR);
		procExpr();
		eat(TT_CLOSE_BR);
	}
}

// <function> ::= '.' ( length | to_i | to_s )
void SyntaticAnalysis::procFunction() {
	eat(TT_DOT);
	if(m_current.type == TT_LENGHT)
		eat(TT_LENGHT);
	else if(m_current.type == TT_TO_I)
		eat(TT_TO_I);
	else if(m_current.type == TT_TO_S)
		eat(TT_TO_S);
	else
		showError();
}



void SyntaticAnalysis::procNumber() {
	eat(TT_NUMBER);
}

void SyntaticAnalysis::procString() {
	eat(TT_STR);
}

void SyntaticAnalysis::procId() {
	eat(TT_VAR);
}
