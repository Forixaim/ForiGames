#include "Dependencies.h"

int main()
{
	//Premilimary Picking
	long Choice{};
	bool Done = false;
	bool Replay = true;
	int Actions{};
	int PlayerNumber = 0;
	std::string PlayerName;
	std::vector<Player*> Players; //One that holds the real players, alive or dead
	std::vector<Player*> AlivePlayers; //One that holds the players that are alive
	std::random_device RandomDevice; // Random Device for Main Function
	std::default_random_engine RandomEngine{ RandomDevice() }; //The Random Engine
	std::uniform_int_distribution<int> ActionInts{ 0,1 }; //The Uniform Distribution for the random number

	while (Replay)
	{
		PlayerNumber = 0;
		std::cout << "Welcome to ForiGames!" << std::endl;
		Done = false;
		while (Done == false)
		{
			std::cout << "1. Add Player\n2. Done\n";
			while (!(std::cin >> Choice))
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			if (Choice == 1)
			{
				std::cout << "Enter the name for player " << PlayerNumber + 1 << std::endl;
				std::cin >> PlayerName;
				std::cout << std::endl;
				Players.push_back(new Player(PlayerName));
				PlayerNumber++;
			}
			else if (Choice == 2)
			{
				break;
			}
			else
			{
				std::cout << "Invalid Input" << std::endl;
			}
		}
		Choice = static_cast<int>(Players.size());
		//copy the player vector to the alive vector.
		AlivePlayers.reserve(Players.size());
		for (auto Player : Players)
		{
			AlivePlayers.push_back(Player);
		}
		int StandingPlayers = Choice;
		//Begin Hunger games
		std::cout << "Press Enter to Continue\n";
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		while (StandingPlayers != 1)
		{
			std::srand(static_cast<int>(time(nullptr)));
			Actions = rand() % 2;
			unsigned long const RandomNumber = rand() % AlivePlayers.size();
			unsigned long KillerNumber{}; 
			do
			{
				KillerNumber = rand() % AlivePlayers.size();
			} 
			while (KillerNumber == RandomNumber);
			if (Actions == 1)
			{
				Player* Killer = AlivePlayers.at(KillerNumber);
				Player* Victim = AlivePlayers.at(RandomNumber);
				if (Killer->GetName() == "Forixaim")
				{
					auto const ForiKill = new ForixaimKillMessage(Killer->GetName(), Victim->GetName());
					delete ForiKill;
					StandingPlayers--;
				}
				else
				{
					auto const SoloKill = new SoloKillMessage(Killer->GetName(), Victim->GetName());
					delete SoloKill;
					Victim->Dead();
					AlivePlayers.erase(AlivePlayers.begin() + RandomNumber);
					StandingPlayers--;
				}
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			else
			{
				Player* Victim = AlivePlayers.at(RandomNumber);
				//Tries to kill the victim
				std::string const Name = Victim->GetName();
				auto const Death = new DeathMessage(Name);
				Victim->Dead();
				AlivePlayers.erase(AlivePlayers.begin() + RandomNumber);
				delete Death;
				StandingPlayers--;
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
		}
		for (int i = 0; i < Choice; i++)
		{
			Player* Winner = Players.at(i);
			if (!(Winner->IsDead() == true))
			{
				PlayerName = Winner->GetName();
				break;
			}
		}
		std::cout << "The winner is: " << PlayerName << "!" << std::endl;
		//Delete the pointer and erase it from the vector when done
		for (int i = Choice-1; i >= 0; i--)
		{
			delete Players.at(i);
		}
		Players.erase(Players.begin(), Players.end());
		std::cout << "Would you like to play again? (1. Yes 2. No)\n";
		Done = false;
		while (Done == false)
		{
			while (!(std::cin >> Choice))
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			if (Choice == 1)
			{
				Done = true;
				Replay = true;
			}
			else if (Choice == 2)
			{
				Done = true;
				Replay = false;
			}
			else
			{
				std::cout << "Invalid Input" << std::endl;
			}
		}
	}
	return 0;
}
