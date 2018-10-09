#include "Character.h"
#include "CharClass.h"
#include "CharRace.h"

/*Charcter Classes are done in alphabetical order*/
Character::Character(int requiredLevel, int classType, int raceType, bool average)
{
	CharClass randClass = CharClass(classType, average);
	CharRace randRace = CharRace(raceType);
	characterClass = randClass.getClassName;
	characterLevel = requiredLevel;
	characterRace = raceType;
}

Character::~Character()
{
}

int Character::getLevel()
{
	return characterLevel;
}

string Character::getClass()
{
	return characterClass;
}

int Character::getHealth()
{
	return 0;
}

string Character::getRace()
{
	return string();
}


}
