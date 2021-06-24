#ifndef SYNTATIC_ANALYSIS_H
#define SYNTATIC_ANALYSIS_H

#include "../lexical/LexicalAnalysis.h"

class SyntaticAnalysis {
	public:
		SyntaticAnalysis(LexicalAnalysis& lex);
		virtual ~SyntaticAnalysis();
		void start();
	private:
		LexicalAnalysis& m_lex;
		Lexeme m_current;

		void advance();
		void eat(enum TokenType type);
		void showError();

		void procCode();
		void procCmd();
		void procIf();
		void procUnless();
		void procWhile();
		void procUntil();
		void procFor();
		void procOutput();
		void procAssign();
		void procPost();
		void procBoolExpr();
		void procCmpExpr();
		void procExpr();
		void procArith();
		void procTerm();
		void procPower();
		void procFactor();
		void procConst();
		void procInput();
		void procArray();
		void procAccess();
		void procFunction();
		void procNumber();
		void procString();
		void procId();
};

#endif
