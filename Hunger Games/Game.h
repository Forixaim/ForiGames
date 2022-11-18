#pragma once
#include "CoreGame.h"
//The Game Class
class Game
{
private:
	//Initial choices by players
	//Yes/No choice
	char YesNoChoice{};
	//Integer based choices, make an array of ints to dictate what choice
	std::array<int, 2> IntChoice{};

	//Core Variables
	//Number of Total Players, Alive or Dead
	std::vector<Player*> Players;
	//Number of Players Alive
	std::vector<Player*> AlivePlayers;
	//Number of Winners, Default is one.
	int Winners = 1;
	//The Random Device
	std::random_device Random;
	//The Random Engine that is used to generate random numbers
	std::default_random_engine RandomEngine{ Random() };

	//Private Functions
	//Removes a player from the game by index
	void RemovePlayer(unsigned Index);
public:
	//Set create a game
	Game();
	//Delete all pointers within the Player Vector
	~Game();
	//Gets a player by the name
	Player* GetPlayer(const std::string* const Name) const;
	//Gets a player by the index
	Player* GetPlayer(int Index) const;
	//Removes a player from the game by name
	void RemovePlayer(const std::string *const Name);
	//Removes an alive player from the game by memory address
	void RemoveAlivePlayer(Player* Player);
	//Adds a player to the game
	void AddPlayer(std::string Name);
	//Invokes a kill event
	void InvokeKillEvent();
	//Solo Kill Event
	void SoloKillEvent(Player* Killer, Player* Victim);
};