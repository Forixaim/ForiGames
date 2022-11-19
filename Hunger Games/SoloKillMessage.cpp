#include "SoloKillMessage.h"

SoloKillMessage::SoloKillMessage(Player* Killer, Player* Victim)
{

	this->KillerP = std::move(Killer);
	this->VictimP = std::move(Victim);
	std::string KillerName = this->KillerP->GetName();
	std::string VictimName = this->VictimP->GetName();
	//A list of kill messages
	std::vector<std::string> const SoloKillMessages =
	{
		KillerName + " has decided to suplex " + VictimName + " into the mouth of an active volcano.",
		KillerName + " has hit " + VictimName + "'s pressure point, killing them instantly.",
		KillerName + " blasted " + VictimName + " to oblivion with a kamehameha.",
		VictimName + " ended up dead because " + KillerName + " was bored.",
		KillerName + " snuck up and strangled " + VictimName + " gaining a stealthy takedown medal.",
		KillerName + " punched " + VictimName + " into orbit.",
		KillerName + " stomped " + VictimName + "'s brains out, leaving a bloody mess.",
		KillerName + " sparta kicked " + VictimName + " into the sun.",
		KillerName + " landed a devastating punch at " + VictimName + "'s heart, stopping it.",
		KillerName + " screamed so loud that " + VictimName + " died from a stroke.",
		KillerName + "@ForiGames:~$ sudo rm " + VictimName + " -rf",
		KillerName + " trips " + VictimName + " into a ravine.",
		KillerName + " makes a joke so funny " + VictimName + " dies from laughter.",
		KillerName + " encountered skill issue, but wololo'd and used them to kill " + VictimName + ".",
		KillerName + " pushed " + VictimName + " off a cliff.",
		VictimName + " tried to kill " + KillerName + ", but " + KillerName + " had an uno reverse card and killed " + VictimName + " instead.",
		KillerName + " smashed " + VictimName + "'s skull against The Rock.",
		KillerName + " game ended " + VictimName + ".",
		KillerName + " boom bap bop ba da ba boop pow " + VictimName + " ending their career.",
		KillerName + " superheats " + VictimName + ", turning them into plasma.",
		KillerName + "@ForiGames:~$ sudo pacman -Rnsu " + VictimName,
		KillerName + " overpowered and killed " + VictimName + "."
	};
	//A uniform distribution that sets the min and max
	std::uniform_int_distribution<unsigned long> Uniform{ 0, static_cast<unsigned long>(SoloKillMessages.size() - 1) };
	MessageContent = SoloKillMessages.at(Uniform(RandomEngine));
	std::cout << MessageContent << std::endl;
	this->VictimP->KillOrRevive();
}