#include "DeathMessage.h"

DeathMessage::DeathMessage(std::string VictimName)
{
	std::default_random_engine RandomEngine
	{
		RNG()
	};
	Victim = VictimName;
	std::vector<std::string> DeathMessages = 
	{ 
		(Victim + " stepped on a thorn bush."),
		(Victim + " dies from an infection."),
		(Victim + " stopped existing."),
		(Victim + " slipped on a banana peel and into an active volcano."),
		(Victim + " saw his great grandma."),
		(Victim + " ragequit!"),
		Victim + "'s family accidentally took off his NerveGear.",
		Victim + " saw a character they simped, barked, and died because they can't get enough air to bark.",
		Victim + " got suplexed by a ghost.",
		Victim + " went to the wrong Hunger Games Simulator.",
		Victim + " detonated a M18 Claymore Mine facing in the wrong direction.",
		Victim + " got a pipebomb in their mailbox.",
		Victim + " stepped on a springpad and was launched into orbit.",
		"The host got bored and shot " + Victim + " to spice things up.",
		Victim + " was poked to death by a sweet berry bush whilst trying to escape Ender Dragon. Well, a fake statue of it.",
		Victim + " slipped on ice, falls into a frozen lake, and dies from hypothermia.",
		Victim + " dies from heatstroke.",
		Victim + "'s brain shut down.",
		Victim + " steps on an M75 Landmine.",
		Victim + " dies of cringe."
	};
	std::uniform_int_distribution<int> Uniform(0, DeathMessages.size()-1);
	int RandomNumber = static_cast<int>(Uniform(RandomEngine));
	std::cout << "[DEBUG:] Random Death Message Number is: " << RandomNumber << std::endl;
	MessageContent = DeathMessages.at(RandomNumber);
	std::cout << MessageContent << std::endl;
}