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
	bool IsDead = false;
	bool IsCareer = false;
public:
	Player(std::string InputName);
	~Player();
};
