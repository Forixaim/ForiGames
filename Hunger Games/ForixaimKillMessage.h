#pragma once
#include "KillMessage.h"
class ForixaimKillMessage : public KillMessage
{
private:
	std::string Killer{};
	std::string Victim{};
	std::string MessageContent{};
public:
	ForixaimKillMessage(std::string KillerName, std::string VictimName);
	~ForixaimKillMessage() override = default;
};

