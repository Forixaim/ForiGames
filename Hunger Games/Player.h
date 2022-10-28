#pragma once
#include <iostream>
#include <cstdint>
class Player
{
private:
	std::string Name{};
	uint8_t Power{};
	uint8_t Speed{};
	uint8_t Morale{};
	uint8_t Knowledge{};
	uint8_t Hunger = 100;
	bool IsCareer = false;
public:
	bool IsDead = false;
	Player(std::string InputName);
	~Player();
	std::string GetName();
	void Dead();
};
