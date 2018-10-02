#pragma once
class Character
{
private:
	int characterLevel;
	int characterClass;

public:
	Character(int requiredLevel, int classType);
	~Character();
	int getLevel();
	int getClass();
};

