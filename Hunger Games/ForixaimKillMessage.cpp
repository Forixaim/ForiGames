#include "ForixaimKillMessage.h"

ForixaimKillMessage::ForixaimKillMessage(std::string KillerName, std::string VictimName)
{
	Killer = KillerName;
	Victim = VictimName;
	srand(static_cast<int>(time(nullptr)));
	int RandomNumber = rand() % 12;
	switch (RandomNumber)
	{
	case 1:
		MessageContent = KillerName + " called Charlemagne Halpas Flaron and burned " + VictimName + " to ashes.";
		break;
	case 2:
		MessageContent = KillerName + " called Kalish Alexander Eridanus and impaled " + VictimName + " with millions of spears.";
		break;
	case 3:
		MessageContent = KillerName + " called Uther Lux and used Ataraxia on " + VictimName + ".";
		break;
	case 4:
		MessageContent = KillerName + " called Tiamat Lux and brutally slashed " + VictimName + "'s head off.";
		break;
	case 5:
		MessageContent = KillerName + " called Yang Huang Di, froze " + VictimName + ", and shattered them into a million atomic pieces.";
		break;
	case 6:
		MessageContent = KillerName + " called Socrates Augustus and exposed " + VictimName + "'s hidden criminal record.";
		break;
	case 7:
		MessageContent = KillerName + " called Parvati Brahmastra and blew " + VictimName + " out of the arena.";
		break;
	case 8:
		MessageContent = KillerName + " called Sakamoto-yamato Iware-biko no Mikoto and drowned " + VictimName + ".";
		break;
	case 9:
		MessageContent = KillerName + " called Franklin Smith to expose " + VictimName + " to their ancestry, killing them with embarrassment.";
		break;
	case 10:
		MessageContent = KillerName + " called Itachi Shinjin to suffocate " + VictimName + " with vines.";
		break;
	case 11:
		MessageContent = KillerName + " called Count Leitner Ophilia von Lithigra and poisoned " + VictimName + " to death by a million tiny lithigran bees.";
		break;
	default:
		MessageContent = KillerName + " called Izuna Shinjin and sucked " + VictimName + "'s soul out, bleugh!";
		break;
	}
	std::cout << MessageContent << std::endl;
}
