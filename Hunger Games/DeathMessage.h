#pragma once
#include "Message.h"
class DeathMessage
{
private:
	std::string Victim{};
	std::string MessageContent{};
public:
	DeathMessage();
	~DeathMessage();
};

