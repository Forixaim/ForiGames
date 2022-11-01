#pragma once
#include "Message.h"
class DeathMessage : public Message
{
private:
	std::string Victim{};
	std::string MessageContent{};
	std::random_device RNG;
public:
	DeathMessage(std::string VictimPlayer);
	~DeathMessage() override;
};
