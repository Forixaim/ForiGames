#pragma once
#include "AmbientMessage.h"
class SoloAmbient : public AmbientMessage
{
private:
	std::string Person{};
	std::string MessageContent{};
	std::random_device Random;
public:
	SoloAmbient(std::string PlayerName);
	~SoloAmbient() override = default;
};

