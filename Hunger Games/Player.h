#pragma once
#include "Elements.h"
#include <iostream>
class Player
{
private:
	int PlayerElement = FIRE;
	std::string Name{};
	unsigned int ExtraLives = 0;
	bool ValueDead = false;
	unsigned int Kills = 0;
public:
	Player(std::string InputName);
	~Player();
	std::string GetName();
	unsigned int GetLives() const;
	bool IsDead() const;
	void KillOrRevive();
	unsigned int GetKills() const;
	void AddKill(int Amount = 1);
};
