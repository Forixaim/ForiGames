#include "ForixaimKillMessage.h"

ForixaimKillMessage::ForixaimKillMessage(std::string KillerName, std::string VictimName)
{
	Killer = std::move(KillerName);
	Victim = std::move(VictimName);
	//A list of possible messages
	std::vector<std::string> ForixaimKillMessages =
	{
		Killer + " called Charlemagne Halpas Flaron and burned " + Victim + " to ashes.",
		Killer + " called Kalish Alexander Eridanus and impaled " + Victim + " with millions of dark matter spears.",
		Killer + " called Uther Lux and used Ataraxia on " + Victim + ".",
		Killer + " called Tiamat Lux and brutally slashed " + Victim + "'s head off.",
		Killer + " called Yang Huang Di, froze " + Victim + ", and shattered them into a million atomic pieces.",
		Killer + " called Socrates Augustus and exposed " + Victim + "'s hidden criminal record.",
		Killer + " called Parvati Brahmastra and blew " + Victim + " out of the arena.",
		Killer + " called Sakamoto-yamato Iware-biko no Mikoto and drowned " + Victim + ".",
		Killer + " called Franklin Smith to expose " + Victim + " to their ancestry, killing them with embarrassment.",
		Killer + " called Itachi Shinjin to suffocate " + Victim + " with vines.",
		Killer + " called Count Leitner Ophilia von Lithigra and poisoned " + Victim + " to death by a million tiny lithigran bees.",
		Killer + " called Izuna Shinjin and sucked " + Victim + "'s soul out, bleugh!"
	};
	//A uniform distribution that sets the min and max
	std::uniform_int_distribution<unsigned long> Uniform{ 0, static_cast<unsigned long>(ForixaimKillMessages.size() - 1) };
	MessageContent = ForixaimKillMessages.at(Uniform(RandomEngine));
	std::cout << MessageContent << std::endl;
}
