#include "SymbolTable.h"

SymbolTable::SymbolTable() {
	// Symbols
	m_symbols[";"] = TT_SEMICOLON;
	m_symbols["="] = TT_ASSIGN;
	m_symbols["."] = TT_DOT;
	m_symbols["["] = TT_OPEN_BR;
	m_symbols["]"] = TT_CLOSE_BR;
	m_symbols["("] = TT_OPEN_PAR;
	m_symbols[")"] = TT_CLOSE_PAR;
	m_symbols[","] = TT_COMMA;

	// Logic operators
	m_symbols["=="] = TT_EQUAL;
	m_symbols["!="] = TT_NOT_EQUAL;
	m_symbols["<"] = TT_LOWER;
	m_symbols["<="] = TT_LOWER_EQUAL;
	m_symbols[">"] = TT_GREATER;
	m_symbols[">="] = TT_GREATER_EQUAL;
	m_symbols["==="] = TT_CONTAINS;
	m_symbols["not"] = TT_NOT;
	m_symbols[".."] = TT_FINC;
	m_symbols["..."] = TT_FEXC;

	// Arithmetic operators
	m_symbols["+"] = TT_ADD;
	m_symbols["-"] = TT_SUB;
	m_symbols["*"] = TT_MUL;
	m_symbols["/"] = TT_DIV;
	m_symbols["%"] = TT_MOD;
	m_symbols["**"] = TT_EXP;

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
	m_symbols["end"] = TT_END;
	m_symbols["in"] = TT_IN;
	m_symbols["gets"] = TT_GETS;
	m_symbols["lenght"] = TT_LENGHT;
	m_symbols["to_i"] = TT_TO_I;
	m_symbols["to_s"] = TT_TO_S;
}

SymbolTable::~SymbolTable() {
}

bool SymbolTable::contains(const std::string& token) const {
	return m_symbols.find(token) != m_symbols.end();
}

enum TokenType SymbolTable::find(const std::string& token) {
	return this->contains(token) ? m_symbols[token] : TT_VAR;
}
