#pragma once
#include "Message.h"
//A death message class that may become another parent class soon.
class DeathMessage : public Message
{
private:
	//The victim's name
	std::string Victim{};
	//The message content
	std::string MessageContent{};
public:
	//The Default Constructor used to call a random amount of messages within the class.
	DeathMessage(std::string VictimPlayer);
	~DeathMessage() override = default;
};
