#pragma once
#include "Elements.h"
#include <iostream>
class Weapon
{
private:
	std::string Name{};
public:
	Weapon() = default;
	virtual ~Weapon() = default;
protected:
	std::string GetName() const;
	void SetName(std::string NewName);
};

