#include "ShelterMessage.h"

ShelterMessage::ShelterMessage(std::string PlayerName, std::string ShelterName)
{
	Shelter = ShelterName;
	MessageContent = PlayerName + " has built " + ShelterName;
}


ShelterMessage::~ShelterMessage() = default;