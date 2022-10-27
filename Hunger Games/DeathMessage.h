#pragma once
#include "Message.h"
class DeathMessage : public Message
{
private:
	std::string Victim{};
	std::string MessageContent{};
public:
	DeathMessage();
	~DeathMessage();
};
