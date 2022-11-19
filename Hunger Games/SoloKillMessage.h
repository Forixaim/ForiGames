#pragma once
#include "KillMessage.h"

class SoloKillMessage : public KillMessage
{
private:
	//Name of the Killer
	Player* KillerP = nullptr;
	//Name of the Victim
	Player* VictimP = nullptr;
	//The content of the message
	std::string MessageContent{};
public:
	//Constructor
	SoloKillMessage(Player* Killer, Player* Victim);
	//Destructor
	~SoloKillMessage() override = default;
};

