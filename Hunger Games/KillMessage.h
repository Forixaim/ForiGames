#pragma once
#include "Message.h"
class KillMessage : public Message
{
private:
	std::string Killer{};
	std::string Victim{};
	std::string MessageContent{};
public:
	KillMessage(std::string KillerName, std::string VictimName);
	~KillMessage() override;
};

