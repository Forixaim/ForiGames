#pragma once
#include "AmbientMessage.h"
#include "Player.h"
class ForixaimAmbient : public AmbientMessage
{
private:
	std::random_device Random;
	Player* PlayerObj = nullptr;
public:
	ForixaimAmbient(Player* &InputPlayer);
	~ForixaimAmbient() override = default;
};

