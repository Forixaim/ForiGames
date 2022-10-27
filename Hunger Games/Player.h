#pragma once
#include "Dependencies.h"
class Player
{
private:
	std::string Name{};
	bool IsDead = false;
public:
	Player(std::string InputName);
	~Player();
};
