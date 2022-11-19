#pragma once
#include "SoloKillMessage.h"
#include "CoreGame.h"
#include <Windows.h>
//The Game Class
class Game
{
private:
	//Initial choices by players
	//Bool for loop stopping
	std::array<bool, 2> LoopStoppers;
	//Yes/No choice
	char YesNoChoice{};
	//Integer based choices, make an array of ints to dictate what choice
	std::array<int, 2> IntChoice{};
	//Core Variables
	//Number of Total Players, Alive or Dead
	std::vector<Player*> Players = {};
	//Number of Players Alive, used in a kill event
	std::vector<Player*> AlivePlayers = {};
	//Number of Winners, Default is one.
	int Winners = 1;
	//The Random Device
	std::random_device Random;
	//The Random Engine that is used to generate random numbers
	std::default_random_engine RandomEngine{ Random() };
	//The Players that are victims in a kill event
	std::vector<Player*> Victims;
	//The players that may be killers in a kill event
	std::vector<Player*> PotentialKillers;
	//The players that are killers in a kill event
	std::vector<Player*> Killers;
	//Private Functions
	//Removes a player from the game by index
	void RemovePlayer(unsigned Index);
	//Menu Text
	std::string MenuText = "********************\n* 1. Add Player    *\n* 2. Remove Player *\n* 3. Let's Rock!   *\n********************";
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
	//Reset the Alive Players at the end of a Kill Event
	void ResetAlivePlayers();
	void ClearCLI(char Fill = ' ');
};