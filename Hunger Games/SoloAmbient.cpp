#include "SoloAmbient.h"

SoloAmbient::SoloAmbient(std::string PlayerName)
{
	Person = PlayerName;
	srand(static_cast<int>(time(nullptr)));
	unsigned long RandomNumber = rand() % 20;
	switch (RandomNumber)
	{
	case 1:
		MessageContent = PlayerName + " is barking for no fucking reason.";
		break;
	case 2:
		MessageContent = PlayerName + " looks for memes.";
		break;
	case 3:
		MessageContent = PlayerName + " tries to sleep.";
		break;
	case 4:
		MessageContent = PlayerName + " eats their MRE knowing that they will receive another one tomorrow.";
		break;
	case 5:
		MessageContent = PlayerName + " looks for memes.";
		break;
	case 6:
		MessageContent = PlayerName + " looks for memes.";
		break;
	case 7:
		MessageContent = PlayerName + " is barking for no fucking reason.";
		break;
	case 8:
		MessageContent = PlayerName + " looks for memes.";
		break;
	case 9:
		MessageContent = PlayerName + " looks for memes.";
		break;
	case 10:
		MessageContent = PlayerName + " looks for memes.";
		break;
	case 11:
		MessageContent = PlayerName + " looks for memes.";
		break;
	case 12:
		MessageContent = PlayerName + " looks for memes.";
		break;
	case 13:
		MessageContent = PlayerName + " is barking for no fucking reason.";
		break;
	case 14:
		MessageContent = PlayerName + " looks for memes.";
		break;
	case 15:
		MessageContent = PlayerName + " looks for memes.";
		break;
	case 16:
		MessageContent = PlayerName + " looks for memes.";
		break;
	case 17:
		MessageContent = PlayerName + " looks for memes.";
		break;
	case 18:
		MessageContent = PlayerName + " looks for memes.";
		break;
	default:
		MessageContent = PlayerName + " picks flowers.";
		break;
	}
	std::cout << MessageContent << std::endl;
}