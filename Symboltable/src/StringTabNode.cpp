#include "../includes/StringTabNode.h"

StringTabNode::StringTabNode() {
	initStringTab();
}

StringTabNode::~StringTabNode() {

}

void StringTabNode::initStringTab() {
	vector = new char[512];

	first = new char[512];
	next = new char[512];

	vector[0] = first;
	vector[1] = next;

	indexOfCurrentTab = 0;
}

void StringTabNode::newStringTab(char * nextFreePlace) {
	char * current = vector[indexOfCurrentTab];
	char * after = vector[indexOfCurrentTab + 1];

	char * tmp = new char[512];

	vector[indexOfCurrentTab + 2] = tmp;

	next = tmp;

	indexOfCurrentTab += 1;

	nextFreePlace = after;
}
