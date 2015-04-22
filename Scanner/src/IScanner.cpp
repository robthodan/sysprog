#include "../includes/Scanner.h"
#include "../../Automat/includes/Automat.h"
#include "../../Buffer/includes/Buffer.h"
#include "../../Symboltable/includes/Symboltable.h"

class IScanner {
public:
	virtual ~IScanner() {}

	virtual void mkToken(TokenType type) = 0;
	virtual void ungetChar(int unget) = 0;
	virtual void stop() = 0;
};
