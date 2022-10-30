#include "Dependencies.h"

int main()
{
	//Premilimary Picking
	int PlayerCount{};
	int Actions{};
	int PlayerNumber = 0;
	std::string PlayerName;
	std::vector<Player*> Players; //One that holds the real players, alive or dead
	std::vector<Player*> AlivePlayers; //One that holds the players that are alive
	std::cout << "Welcome to ForiGames!" << std::endl;
	while (true)
	{
		std::cout << "1. Add Player\n2. Done\n";
		while (!(std::cin >> PlayerCount))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		if (PlayerCount == 1)
		{
			std::cout << "Enter the name for player " << PlayerNumber + 1 << std::endl;
			std::cin >> PlayerName;
			std::cout << std::endl;
			Players.push_back(new Player(PlayerName));
			PlayerNumber++;
		}
		else if (PlayerCount == 2)
		{
			break;
		}
		else
		{
			std::cout << "Invalid Input" << std::endl;
		}
	}
	PlayerCount = Players.size();
	//copy the player vector to the alive vector.
	for (int i = 0; i < Players.size(); i++)
	{
		AlivePlayers.push_back(Players.at(i));
	}
	int StandingPlayers = PlayerCount;
	//Begin Hunger games
	std::cout << "Press Enter to Continue\n";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	while (StandingPlayers != 1)
	{
		std::srand((int)time(0));
		Actions = rand() % 2;
		int RandomNumber = rand() % AlivePlayers.size();
		int KillerNumber{}; 
		do
		{
			KillerNumber = rand() % AlivePlayers.size();
		} 
		while (KillerNumber == RandomNumber);
		if (Actions == 1)
		{
			Player* Killer = AlivePlayers.at(KillerNumber);
			Player* Victim = AlivePlayers.at(RandomNumber);
			KillMessage* Kill = new KillMessage(Killer->GetName(), Victim->GetName());
			Victim->Dead();
			delete Kill;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			AlivePlayers.erase(AlivePlayers.begin() + RandomNumber);
			StandingPlayers--;
		}
		else
		{
			Player* Victim = AlivePlayers.at(RandomNumber);
			//Tries to kill the victim
			std::string Name = Victim->GetName();
			DeathMessage* Death = new DeathMessage(Name);
			Victim->Dead();
			delete Death;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			AlivePlayers.erase(AlivePlayers.begin() + RandomNumber);
			StandingPlayers--;
		}
	}
	for (int i = 0; i < PlayerCount; i++)
	{
		Player* Winner = Players.at(i);
		if (!(Winner->IsDead))
		{
			PlayerName = Winner->GetName();
			break;
		}
	}
	std::cout << "The winner is: " << PlayerName << "!" << std::endl;
	//Delete the pointer and erase it from the vector when done
	for (int i = PlayerCount-1; i >= 0; i--)
	{
		delete Players.at(i);
	}
	Players.erase(Players.begin(), Players.end());
	return 0;
}
