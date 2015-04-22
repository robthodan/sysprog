class StringTabNode {
public:
	StringTabNode();
	~StringTabNode();

	void initStringTab();
	void newStringTab(char * nextFreePlace);
private:
	char vector[];
	char * first;
	char * next;
	int indexOfCurrentTab;
};
