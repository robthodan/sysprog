#include "../includes/StringTab.h"
#include "../includes/StringTabNode.h"


StringTab::StringTab(){
	StringTabNode* stringTabNode = new StringTabNode();
	freePlace = stringTabNode->first;
	freeSpace = 512;
}
StringTab::~StringTab(){

}

char * StringTab::insert(char * lexem, int size) {
	char * tmp = this->freePlace;

	if(size < this->freeSpace) {
		memcpy(this->freePlace, lexem, size + 1);
		this->freePlace[size] = size;
		this->freePlace += size + 1;
		this->freeSpace -= size + 1;
	} else {
		//TODO
		StringTabNode::newStringTab(freePlace);
	}
	return tmp;
}
