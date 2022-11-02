#include "SoloKillMessage.h"

SoloKillMessage::SoloKillMessage(std::string KillerName, std::string VictimName)
{

	Killer = KillerName;
	//Name of the Victim
	Victim = VictimName;
	//Engine that does the random stuff
	std::default_random_engine Engine{ Random() };
	//A list of hard coded kill messages
	std::vector<std::string> SoloKillMessages =
	{
		Killer + " has decided to suplex " + Victim + " into the mouth of an active volcano.",
		Killer + " has hit " + Victim + "'s pressure point, killing them instantly.",
		Killer + " blasted " + Victim + " to oblivion with a kamehameha.",
		Victim + " ended up dead because " + Killer + " was bored.",
		Killer + " snuck up and strangled " + Victim + " gaining a stealthy takedown medal.",
		Killer + " punched " + Victim + " into orbit.",
		Killer + " stomped " + Victim + "'s brains out, leaving a bloody mess.",
		Killer + " sparta kicked " + Victim + " into the sun.",
		Killer + " landed a devastating punch at " + Victim + "'s heart, stopping it.",
		Killer + " screamed so loud that " + Victim + " died from a stroke.",
		Killer + "@ForiGames:~$ sudo rm " + Victim + " -rf",
		Killer + " trips " + Victim + " into a ravine.",
		Killer + " makes a joke so funny " + Victim + " dies from laughter.",
		Killer + " encountered skill issue, but wololo'd and used them to kill " + Victim + ".",
		Killer + " pushed " + Victim + " off a cliff.",
		Victim + " tried to kill " + Killer + ", but " + Killer + " had an uno reverse card and killed " + Victim + " instead.",
		Killer + " smashed " + Victim + "'s skull against The Rock.",
		Killer + " game ended " + Victim + ".",
		Killer + " boom bap bop ba da ba boop pow " + Victim + " ending their career.",
		Killer + " superheats " + Victim + ", turning them into plasma.",
		Killer + "@ForiGames:~$ sudo pacman -Rnsu " + Victim,
		Killer + " overpowered and killed " + Victim + "."
	};
	//A distrubution that sets the min and the max
	std::uniform_int_distribution<int> Uniform(0, SoloKillMessages.size());
	//Random Number
	int RandomKillMessage = static_cast<int>(Uniform(Engine));
	//Print the Debug Message
	std::cout << "[DEBUG:] Random Kill Message Number is: " << RandomKillMessage << std::endl;
	MessageContent = SoloKillMessages.at(RandomKillMessage);
	std::cout << MessageContent << std::endl;
}