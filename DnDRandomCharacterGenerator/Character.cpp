#include "Character.h"

Character::Character(int requiredLevel, int classType)
{
	characterClass = classType;
	characterLevel = requiredLevel;
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
