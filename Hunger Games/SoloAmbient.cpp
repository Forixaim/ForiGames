#include "SoloAmbient.h"

SoloAmbient::SoloAmbient(std::string PlayerName)
{
	Person = std::move(PlayerName);
	std::vector<std::string> SoloAmbientMessages =
	{
		Person + " went looking for memes.",
	};
	MessageContent = SoloAmbientMessages.at(UniformDist(RandomEngine));
	std::cout << MessageContent << std::endl;
}