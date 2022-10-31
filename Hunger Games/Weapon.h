#pragma once
#include <iostream>
class Weapon
{
private:
	std::string Name{};
public:
	Weapon() = default;
	virtual ~Weapon() = default;
};

