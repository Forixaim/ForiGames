#include "KillMessage.h"

KillMessage::KillMessage(std::string KillerName, std::string VictimName)
{
	Killer = KillerName;
	Victim = VictimName;
	//create 10 random kill messages
	int RandomNumber = rand() % 10;
	switch (RandomNumber)
	{
	case 0:
		MessageContent = KillerName + " has decided to suplex " + VictimName + " into the mouth of an active volcano.";
		break;
	case 1:
		MessageContent = KillerName + " has hit " + VictimName + "'s pressure point, killing them instantly.";
		break;
	case 2:
		MessageContent = KillerName + " blasted " + VictimName + "to oblivion with a kamehameha.";
		break;
	case 3:
		MessageContent = VictimName + " ended up dead because " + KillerName + " was bored.";
		break;
	case 4:
		MessageContent = KillerName + " snuck up and strangled " + VictimName + " in the back, gaining a stealthy takedown medal.";
		break;
	case 5:
		MessageContent = KillerName + " punched " + VictimName + " into orbit.";
		break;
	case 6:
		MessageContent = KillerName + " stomped " + VictimName + "'s brains out, leaving a bloody mess.";
		break;
	case 7:
		MessageContent = KillerName + " sparta kicked " + VictimName + " into the sun.";
		break;
	case 8:
		MessageContent = KillerName + " landed a devastating punch at " + VictimName + "'s heart, stopping it.";
		break;
	case 9:
		MessageContent = KillerName + " screamed so loud that " + VictimName + " died of a heart attack and stroke.";
		break;
	default:
		MessageContent = KillerName + " overpowered and killed " + VictimName + ".";
		break;
	}
}


KillMessage::~KillMessage() = default;