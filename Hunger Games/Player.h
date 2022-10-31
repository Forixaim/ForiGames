#pragma once
#include <iostream>
class Player
{
private:
	std::string Name{};
	
public:
	bool IsDead = false;
	Player(std::string InputName);
	~Player();
	std::string GetName();
	void Dead();
};
