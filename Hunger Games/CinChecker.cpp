#include "CinChecker.h"
#include <iostream>

int CinChecker::CheckCinInt()
{
	int Input;
	while (!(std::cin >> Input))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Input! Please try again: ";
	}
	return Input;
}

bool CinChecker::CheckCinBool()
{
	bool Input;
	while (!(std::cin >> Input))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Input! Please try again: ";
	}
	return Input;
}

double CinChecker::CheckCinDoubleOrFloat()
{
	double Input;
	while (!(std::cin >> Input))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Input! Please try again: ";
	}
	return Input;
}

char CinChecker::CheckCinChar()
{
	char Input;
	while (!(std::cin >> Input))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid Input! Please try again: ";
	}
	return Input;
}