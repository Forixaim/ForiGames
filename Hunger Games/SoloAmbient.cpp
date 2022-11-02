#include "SoloAmbient.h"

SoloAmbient::SoloAmbient(std::string PlayerName)
{
	std::default_random_engine Engine{ Random() };
	Person = PlayerName;
	std::vector<std::string> AmbientMessages =
	{
		
	};
	std::cout << MessageContent << std::endl;
}