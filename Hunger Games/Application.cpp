#include "Dependencies.h"

int main()
{
	//Premilimary Picking
	int PlayerCount{};
	std::string PlayerName;
	std::vector<Player*> Players;
	std::cout << "Enter the number of players\n";
	while (!(std::cin >> PlayerCount))
	{
		//clears the input buffer and ignores
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << std::endl;
	for (int i = 0; i < PlayerCount; i++)
	{
		std::cout << "Enter the name for player " << i + 1 << std::endl;
		std::cin >> PlayerName;
		std::cout << std::endl;
		Players.push_back(new Player(PlayerName));
	}
	//Begin Hunger games

	
	//Delete the pointer and erase it from the vector when done
	for (int i = PlayerCount-1; i >= 0; i--)
	{
		delete Players.at(i);
	}
	Players.erase(Players.begin(), Players.end());
}
