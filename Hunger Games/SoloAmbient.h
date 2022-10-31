#pragma once
#include "AmbientMessage.h"
class SoloAmbient : public AmbientMessage
{
private:
	std::string Person{};
	std::string MessageContent{};
public:
	SoloAmbient(std::string PlayerName);
	~SoloAmbient() override = default;
};

