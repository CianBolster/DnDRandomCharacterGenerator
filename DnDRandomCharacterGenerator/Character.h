/*
Will hold all the info for the created character but calculations and random assignments split out into 
different classes
*/

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

};

