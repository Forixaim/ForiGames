#pragma once
#include "Weapon.h"
//A generic melee weapon class
class MeleeWeapon : public Weapon
{
public:
	MeleeWeapon() = default;
	~MeleeWeapon() override = default;
};

