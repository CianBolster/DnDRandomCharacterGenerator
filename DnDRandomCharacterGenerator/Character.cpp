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

int Character::getClass()
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

void Character::calculateHealth(bool useAverage)
{
	if (useAverage = true) {
		switch (characterClass) {
		case 1:/*Barbarian Health*/
			characterHealth = (7 * characterLevel) + (stats.Con);
			break;

		case 2:/*Bard*/
			break;
		case 3:/*Cleric*/
		case 4:/*Druid*/
		case 4:/*Fighter*/
		case 4:/*Monk*/
		case 4:/*Paladin*/
		case 4:/*Ranger*/
		case 4:/*Rogue*/
		case 4:/*Sorcerer*/
		case 4:/*Warlock*/
		case 4:/*Wizard*/
		}
	}
}
