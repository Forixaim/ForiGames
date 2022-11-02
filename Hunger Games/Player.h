#pragma once
#include <iostream>
class Player
{
private:
	std::string Name{};
	unsigned int ExtraLives = 0;
	bool ValueDead = false;
public:
	Player(std::string InputName);
	~Player();
	std::string GetName();
	unsigned int GetLives();
	bool IsDead();
	void Dead();
};
