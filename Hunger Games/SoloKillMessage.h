#pragma once
#include "KillMessage.h"
class SoloKillMessage : public KillMessage
{
private:
	//Name of the Killer
	std::string Killer{};
	//Name of the Victim
	std::string Victim{};
	//The content of the message
	std::string MessageContent{};
	//The random number generator
	std::random_device Random;
public:
	//Constructor
	SoloKillMessage(std::string KillerName, std::string VictimName);
	~SoloKillMessage() override = default;
};

