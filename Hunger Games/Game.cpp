#include "Game.h"

Game::Game()
{
	
	std::cout << "Initial Setup.." << std::endl;
	std::cout << "Would you like to enter a custom number of winners? (y/n)" << std::endl;
	YesNoChoice = CinChecker::CheckCinChar();
	if (YesNoChoice == 'y')
	{
		std::cout << "Enter the number of winners: ";
		Winners = CinChecker::CheckCinInt();
	}
	else
	{
		Winners = 1;
	}
}

Game::~Game()
{
	//Delete all pointers within the Player Vector
	for (const auto& Player : Players)
	{
		delete Player;
	}
	//Erase the Vector
	Players.erase(Players.begin(), Players.end());
}

void Game::AddPlayer(std::string Name)
{
	Players.push_back(new Player(std::move(Name)));
}

void Game::RemovePlayer(unsigned Index)
{
	Players.erase(Players.begin() + Index);
}

void Game::RemovePlayer(const std::string* Name)
{
	for (unsigned Index = 0; Index < Players.size(); Index++)
	{
		if (Players.at(Index)->GetName() == *Name)
		{
			//Delete the pointer
			delete Players.at(Index);
			RemovePlayer(Index);
		}
	}
}

Player* Game::GetPlayer(int Index) const 
{
	return Players.at(Index);
}

Player* Game::GetPlayer(const std::string *const Name) const
{
	for (const auto& Player : Players)
	{
		if (Player->GetName() == *Name)
		{
			return Player;
		}
	}
	return nullptr;
}

void Game::RemoveAlivePlayer(Player* Player)
{
	for (unsigned Index = 0; Index < AlivePlayers.size(); Index++)
	{
		if (AlivePlayers.at(Index) == Player)
		{
			AlivePlayers.erase(AlivePlayers.begin() + Index);
		}
	}
}

void Game::SoloKillEvent(Player* Killer, Player* Victim)
{
	//Remove the victim from the alive players
	RemoveAlivePlayer(Victim);
	//Add a kill to the killer
	Killer->AddKill(1);
}

void Game::InvokeKillEvent()
{
	//Randomly selects a victim from the AlivePlayers vector
	std::uniform_int_distribution<int> UniformDist(0, AlivePlayers.size() - 1);
	int VictimIndex = UniformDist(RandomEngine);
	Player* Victim = AlivePlayers.at(VictimIndex);
	int KillerIndex = UniformDist(RandomEngine);


}

