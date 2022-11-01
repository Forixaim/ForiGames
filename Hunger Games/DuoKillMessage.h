#pragma once
#include "SoloKillMessage.h"
class DuoKillMessage : public KillMessage
{
private:
	std::string Teammate1{};
	std::string Teammate2{};
	std::string Victim{};
	std::random_device RandomDev;

public:
	DuoKillMessage(std::string Teammate1, std::string Teammate2, std::string Victim);
	~DuoKillMessage() override;
};

