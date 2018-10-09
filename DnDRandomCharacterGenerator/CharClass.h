#pragma once
#include <string>

using namespace std;

class CharClass
{
private:
	string className;
	void assignClass(int classType);


public:
	CharClass(int classType, bool useAverage);
	~CharClass();
	string getClassName();
	int calculateHealth(bool useAverage);
};

