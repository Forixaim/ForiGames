#pragma once
#include "Message.h"
class KillMessage : public Message
{
private:
	std::string Killer{};
	std::string Victim{};
public:
	KillMessage() = default;
	virtual ~KillMessage() override = default;

};

