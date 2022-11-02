#pragma once
#include "AmbientMessage.h"
class ShelterMessage : public AmbientMessage
{
private:
	std::string Person{};
	std::string Shelter{};
	std::string MessageContent{};
public:
	ShelterMessage(std::string PlayerName, std::string ShelterName);
	~ShelterMessage() override = default;
};

