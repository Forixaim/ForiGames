#pragma once
#include "Message.h"
class ShelterMessage : public Message
{
private:
	std::string Shelter{};
	std::string MessageContent{};
public:
	ShelterMessage(std::string PlayerName, std::string ShelterName);
	~ShelterMessage() override;
};

