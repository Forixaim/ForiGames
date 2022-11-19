#include "Weapon.h"

std::string Weapon::GetName() const
{
	return this->Name;
}

void Weapon::SetName(std::string NewName)
{
	this->Name = std::move(NewName);
}