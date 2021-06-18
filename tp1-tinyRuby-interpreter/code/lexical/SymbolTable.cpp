#include "SymbolTable.h"

SymbolTable::SymbolTable(){
	// Symbols
	m_symbols[";"] = TT_SEMICOLON;
	m_symbols["="] = TT_ASSIGN;

	// Logic operators
	m_symbols["=="] = TT_EQUAL;
	m_symbols["!="] = TT_NOT_EQUAL;
	m_symbols["<"] = TT_LOWER;
	m_symbols["<="] = TT_LOWER_EQUAL;
	m_symbols[">"] = TT_GREATER;
	m_symbols[">="] = TT_GREATER_EQUAL;
	m_symbols["==="] = TT_CONTAINS;
	m_symbols["not"] = TT_NOT;

	// Arithmetic operators
	m_symbols["+"] = TT_ADD;
	m_symbols["-"] = TT_SUB;
	m_symbols["*"] = TT_MUL;
	m_symbols["/"] = TT_DIV;
	m_symbols["%"] = TT_MOD;
	m_symbols["**"] = TT_EXP;
	m_symbols[".."] = TT_FINC;
	m_symbols["..."] = TT_FEXC;

	// Keywords
	m_symbols["if"] = TT_IF;
	m_symbols["unless"] = TT_UNLESS;
	m_symbols["while"] = TT_WHILE;
	m_symbols["until"] = TT_UNTIL;
	m_symbols["for"] = TT_FOR;
	m_symbols["print"] = TT_PRINT;
	m_symbols["puts"] = TT_PUTS;
	m_symbols["do"] = TT_DO;
	m_symbols["then"] = TT_THEN;
	m_symbols["else"] = TT_ELSE;
	m_symbols["elsif"] = TT_ELSIF;
	m_symbols["rand"] = TT_RAND;
	m_symbols["and"] = TT_AND;
	m_symbols["or"] = TT_OR;
}

SymbolTable::~SymbolTable(){
}

bool SymbolTable::contains(const std::string& token) const{
	return m_symbols.find(token) != m_symbols.end();
}

enum TokenType SymbolTable::find(const std::string& token){
	return this->contains(token) ? m_symbols[token] : TT_INVALID_TOKEN;
}
