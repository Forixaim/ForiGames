#include "DuoKillMessage.h"

DuoKillMessage::DuoKillMessage(std::string Teammate1, std::string Teammate2, std::string Victim)
{
	std::default_random_engine RandomEng
	{
		RandomDev()
	};
	std::uniform_int_distribution<int> Uniform(0, 10);
	int RandomNumber = Uniform(RandomEng);
	
}

DuoKillMessage::~DuoKillMessage() = default;

