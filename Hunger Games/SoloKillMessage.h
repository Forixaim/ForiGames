#pragma once
#include "KillMessage.h"
class SoloKillMessage : public KillMessage
{
private:
	std::string Killer{};
	std::string Victim{};
	std::string MessageContent{};
public:
	SoloKillMessage(std::string KillerName, std::string VictimName);
	~SoloKillMessage() override;
};

