#pragma once
#include "SoloKillMessage.h"
class DuoKillMessage : public KillMessage
{
private:

public:
	DuoKillMessage(std::string Teammate1, std::string Teammate2, std::string Victim);
	~DuoKillMessage() override = default;
};

