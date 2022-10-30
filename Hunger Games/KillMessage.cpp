#include "KillMessage.h"

KillMessage::KillMessage(std::string KillerName, std::string VictimName)
{
	std::srand((int)time(0));
	int RandomKillMessage = rand() % 21;
	Killer = KillerName;
	Victim = VictimName;
	//create 10 random kill messages
	if (Killer == "Forixaim")
	{
		RandomKillMessage = 11;
	}
	switch (RandomKillMessage)
	{
	case 1:
		MessageContent = KillerName + " has decided to suplex " + VictimName + " into the mouth of an active volcano.";
		break;
	case 2:
		MessageContent = KillerName + " has hit " + VictimName + "'s pressure point, killing them instantly.";
		break;
	case 3:
		MessageContent = KillerName + " blasted " + VictimName + " to oblivion with a kamehameha.";
		break;
	case 4:
		MessageContent = VictimName + " ended up dead because " + KillerName + " was bored.";
		break;
	case 5:
		MessageContent = KillerName + " snuck up and strangled " + VictimName + " gaining a stealthy takedown medal.";
		break;
	case 6:
		MessageContent = KillerName + " punched " + VictimName + " into orbit.";
		break;
	case 7:
		MessageContent = KillerName + " stomped " + VictimName + "'s brains out, leaving a bloody mess.";
		break;
	case 8:
		MessageContent = KillerName + " sparta kicked " + VictimName + " into the sun.";
		break;
	case 9:
		MessageContent = KillerName + " landed a devastating punch at " + VictimName + "'s heart, stopping it.";
		break;
	case 10:
		MessageContent = KillerName + " screamed so loud that " + VictimName + " died from a stroke.";
		break;
	case 11:
		MessageContent = KillerName + "@ForiGames:~$ sudo rm " + VictimName + " -rf";
		break;
	case 12:
		MessageContent = KillerName + " trips " + VictimName + " into a ravine.";
		break;
	case 13:
		MessageContent = KillerName + " makes a joke so funny " + VictimName + " dies from laughter.";
		break;
	case 14:
		MessageContent = KillerName + " encountered skill issue, but wololo'd and used them to kill " + VictimName + ".";
		break;
	case 15:
		MessageContent = KillerName + " pushed " + VictimName + " off a cliff.";
		break;
	case 16:
		MessageContent = VictimName + " tried to kill " + KillerName + ", but " + KillerName + " had an uno reverse card and killed " + VictimName + " instead.";
		break;
	case 17:
		MessageContent = KillerName + " smashed " + VictimName + "'s skull against The Rock.";
		break;
	case 18:
		MessageContent = KillerName + " game ended " + VictimName + ".";
		break;
	case 19:
		MessageContent = KillerName + " boom bap bop ba da ba boop pow " + VictimName + " ending their career.";
		break;
	case 20:
		MessageContent = KillerName + " superheats " + VictimName + ", turning them into plasma.";
		break;
	default:
		MessageContent = KillerName + " overpowered and killed " + VictimName + ".";
		break;
	}
	std::cout << MessageContent << std::endl;
}


KillMessage::~KillMessage()
{

}