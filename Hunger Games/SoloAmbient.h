#pragma once
#include "AmbientMessage.h"
class SoloAmbient : public AmbientMessage
{
private:
	std::string Person{};
	std::string MessageContent{};
	//A list of possible messages
	std::vector<std::string> SoloAmbientMessages =
	{

	};
	//A uniform distribution for the random number with cast to long 
	std::uniform_int_distribution<unsigned long> UniformDist{ 0, static_cast<unsigned long>(SoloAmbientMessages.size() - 1) };
public:
	SoloAmbient(std::string PlayerName);
	~SoloAmbient() override = default;
};

