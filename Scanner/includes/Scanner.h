/*
 * Scanner.h
 *
 *  Created on: Sep 26, 2012
 *      Author: knad0001
 */

#include "../../Token/includes/Token.h"

#ifndef SCANNER_H_
#define SCANNER_H_

class Scanner {
public:
	virtual ~Scanner();

	virtual Token nextToken();
	virtual void freeToken();
};

class IScanner {
public:
	virtual ~IScanner(){}

	virtual void mkToken(TokenType type);
	virtual void ungetChar(int amount);
	virtual void stop();
};

class ScannerImpl: public Scanner, public IScanner{
public:
	ScannerImpl();
	~ScannerImpl();

	Token nextToken();
	void freeToken(Token token);

	void mkToken(TokenType type);
	void ungetChar(int amount);
	void stop();
private:
	int row;
	int column;
};

#endif /* SCANNER_H_ */
