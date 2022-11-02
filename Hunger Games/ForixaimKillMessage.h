#pragma once
#include "KillMessage.h"
class ForixaimKillMessage : public KillMessage
{
private:
	//The killer's name, usually Forixaim
	std::string Killer{};
	//The victim's name
	std::string Victim{};
	//The message content
	std::string MessageContent{};
	
public:
	ForixaimKillMessage(std::string KillerName, std::string VictimName);
	~ForixaimKillMessage() override = default;
};

