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
public:
	//Constructor
	SoloKillMessage(std::string KillerName, std::string VictimName);
	//Destructor
	~SoloKillMessage() override = default;
};

