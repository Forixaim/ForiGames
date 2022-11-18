#pragma once
class CinChecker
{
public:
	CinChecker() = default;
	~CinChecker() = default;
	//Checks if the input is an integer
	static int CheckCinInt();
	//Checks if the input is a boolean
	static bool CheckCinBool();
	//Checks if the input is a double or float
	static double CheckCinDoubleOrFloat();
	//Checks if the input is a char
	static char CheckCinChar();
};

