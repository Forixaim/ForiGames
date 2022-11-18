#include "Dependencies.h"
#include "Game.h"
#include "CinChecker.h"
//Some Important Functions

int main()
{
	const int lul = CinChecker::CheckCinInt();
	std::cout << lul;
	return 0;
}
