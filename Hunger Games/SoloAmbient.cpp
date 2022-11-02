#include "SoloAmbient.h"

SoloAmbient::SoloAmbient(std::string PlayerName)
{
	Person = std::move(PlayerName);

	
	MessageContent = SoloAmbientMessages.at(UniformDist(RandomEngine));
	std::cout << MessageContent << std::endl;
}