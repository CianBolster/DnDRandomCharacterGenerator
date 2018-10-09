#pragma once
#include <string>

using namespace std;

class CharClass
{
private:
	string className;
	void assignClass(int classType);


public:
	CharClass(int classType, bool average);
	~CharClass();
	string getClassName();
};

