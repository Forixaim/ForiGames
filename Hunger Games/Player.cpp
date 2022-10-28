#include "Player.h"

Player::Player(std::string InputName)
{
	Name = InputName;
}

Player::~Player()
{
	if (Name == "Forixaim")
	{
		std::cout << Name << ", how's Charlemagne, is she well. I heard that she recently had a child.\n";
	}
	else
	{
		std::cout << "[DEBUG:] " << Name << " Successfully Deleted\n";
	}
}

std::string Player::GetName()
{
	return Name;
}

void Player::Dead()
{
	IsDead = true;
}