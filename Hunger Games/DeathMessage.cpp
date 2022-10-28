#include "Message.h"
#include "DeathMessage.h"

DeathMessage::DeathMessage(std::string VictimName)
{
	std::srand((int)time(0));
	Victim = VictimName;
	int RandomNumber = rand() % 20;
	switch (RandomNumber)
	{
	case 1:
		MessageContent = Victim + " stepped on a thorn bush.";
		break;
	case 2:
		MessageContent = Victim + " dies from an infection.";
		break;
	case 3:
		MessageContent = Victim + " stopped existing.";
		break;
	case 4:
		MessageContent = Victim + " tripped on a banana peel and into an active volcano.";
		break;
	case 5:
		MessageContent = Victim + " saw his great grandma.";
		break;
	case 6:
		MessageContent = Victim + " ragequit!";
		break;
	case 7:
		MessageContent = Victim + "'s family accidentally took off his NerveGear.";
		break;
	case 8:
		MessageContent = Victim + " saw a character they simped, barked, and died because they can't get enough air to bark.";
		break;
	case 9:
		MessageContent = Victim + " got suplexed by a ghost.";
		break;
	case 10:
		MessageContent = Victim + " went to the wrong Hunger Games Simulator.";
		break;
	case 11:
		MessageContent = Victim + " detonated a M18 Claymore Mine facing in the wrong direction.";
		break;
	case 12:
		MessageContent = Victim + " got a pipebomb in their mailbox.";
		break;
	case 13:
		MessageContent = Victim + " stepped on a springpad and was launched into orbit.";
		break;
	case 14:
		MessageContent = "The host got bored and shot " + Victim + " to spice things up.";
		break;
	case 15:
		MessageContent = Victim + " was poked to death by a sweet berry bush whilst trying to escape Ender Dragon. Well, a fake statue of it.";
		break;
	case 16:
		MessageContent = Victim + " slipped on ice, falls into a frozen lake, and dies from hypothermia.";
		break;
	case 17:
		MessageContent = Victim + " dies from heatstroke.";
		break;
	case 18:
		MessageContent = Victim + "'s brain shut down.";
		break;
	case 19:
		MessageContent = Victim + " steps on an M75 Landmine.";
		break;
	default:
		MessageContent = Victim + " dies of cringe.";
		break;
	}
	std::cout << MessageContent << std::endl;
}

DeathMessage::~DeathMessage() = default;