#include "../../Token/includes/Token.h"

ScannerImpl::ScannerImpl() {
	Automat* automat = new Automat();
	Buffer* buffer = new Buffer();
	Symboltable* symTab = new Symboltable();
	row = 1;
	column = 1;

	/*
	 * Symboltabelle vordefinieren mit Schlüsselwörtern
	 */
}

ScannerImpl::~ScannerImpl() {

}

Token ScannerImpl::nextToken() {
	/*
		 *currentToken column
		 *currentToken row
		 *--> Zwischenspeichern
		 */
		/*
		 * currentState = startState;
		 */
		int currentRow = this->row;
		int currentColumn = this->column;

		// Nur für RückgabeFehler
		Token token = new Token(TokenType::AND);

		while(/*Buchstabe aus Buffer ist nicht das Ende*/) {
			/*
			 * pro Buchstabe column plus Eins
			 * Falls '/n' row plus Eins und Column = 0;
			 *
			 */
			/*followingState = AutomatState (automat.readChar(char c)):State*/
				/*Ist followingState = STOP --> Buffer.ungetChar(je nach Rückgabe vom Automat)*/
					/*currentState mit Buchstabenfolge, row, column als Container weitergeben*/
					/*automat.reset()*/
				/*Wenn nicht, dann nächster Buchstabe in Automat*/
			/*currentState = followingState*/

			/*Token bauen --- mkToken()*/
		}
	return token;
}

void ScannerImpl::freeToken(Token token) {

}

void ScannerImpl::mkToken(TokenType type) {

}

void ScannerImpl::ungetChar(int amount) {

}

void ScannerImpl::stop() {

}
