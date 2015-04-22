class StringTab{
public:
	StringTab();
	~StringTab();

	char * insert(char * lexem, int size);
private:
	char * freePlace;
	int freeSpace;
};
