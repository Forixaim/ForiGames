#include "DeathMessage.h"

DeathMessage::DeathMessage(std::string VictimName)
{
	Victim = std::move(VictimName);
	//A list of Death Messages
	std::vector<std::string> const DeathMessages =
	{
		Victim + " stepped on a thorn bush.",
		Victim + " dies from an infection.",
		Victim + " stopped existing.",
		Victim + " slipped on a banana peel and into an active volcano.",
		Victim + " saw his great grandma.",
		Victim + " ragequit!",
		Victim + "'s family accidentally took off his NerveGear.",
		Victim + " saw a character they simped, barked, and died because they can't get enough air to bark.",
		Victim + " got suplexed by a ghost.",
		Victim + " went to the wrong Hunger Games Simulator.",
		Victim + " detonated a M18 Claymore mine facing in the wrong direction.",
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
	//A uniform distribution for the random number generator
	std::uniform_int_distribution<unsigned long> UniformDist{ 0, static_cast<unsigned long>(DeathMessages.size() - 1) };
	MessageContent = DeathMessages.at(UniformDist(RandomEngine));
	std::cout << MessageContent << std::endl;
}