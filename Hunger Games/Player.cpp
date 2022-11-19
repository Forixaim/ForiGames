#include "Player.h"

Player::Player(std::string InputName)
{
	this->Name = InputName;
}

Player::~Player()
{
	if (this->Name == "Forixaim")
	{
		std::cout << this->Name << ", how's Charlemagne, is she well. I heard that she recently had a child.\n";
	}
	else
	{
		std::cout << "[DEBUG:] " << this->Name << " Successfully Deleted\n";
	}
}

std::string Player::GetName()
{
	return this->Name;
}

void Player::KillOrRevive()
{
	if (this->IsDead())
	{
		this->ValueDead = false;
	}
	else
	{
		this->ValueDead = true;
	}
}

bool Player::IsDead() const
{
	return this->ValueDead;
}

unsigned int Player::GetLives() const
{
	return this->ExtraLives;
}

unsigned int Player::GetKills() const
{
	return this->Kills;
}

void Player::AddKill(int Amount = 1)
{
	this->Kills += Amount;
}

