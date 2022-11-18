#pragma once
#include <iostream>
class Player
{
private:
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
	void Dead();
	unsigned int GetKills() const;
	void AddKill(int Amount);
};
