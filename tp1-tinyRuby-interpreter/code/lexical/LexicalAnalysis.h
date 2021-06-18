#ifndef LEXICAL_ANALYSIS_H
#define LEXICAL_ANALYSIS_H

#include "SymbolTable.h"
#include "Lexeme.h"

class LexicalAnalysis{
	public:
		LexicalAnalysis(const char* filename);
		virtual ~LexicalAnalysis();

		Lexeme nextToken();

	private:
		int m_line;
		SymbolTable m_st;
		FILE* m_input;
};

#endif
