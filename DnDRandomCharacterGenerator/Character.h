#pragma once
#include "CharClass.h"
#include "CharRace.h"
#include <string>

using namespace std;

class Character
{
private:
	int characterLevel;
	string characterRace;
	string characterClass;
	int characterHealth;
	struct Stats {
		int Str;
		int Dex;
		int Con;
		int Inti;
		int Wis;
		int Char;
	} stats;

public:
	Character(int requiredLevel, int classType, int raceType, bool average);
	~Character();
	int getLevel();
	string getClass();
	int getHealth();
	string getRace();
	void calculateHealth(bool useAverage);

};

