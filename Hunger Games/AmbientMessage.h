#pragma once
#include "Message.h"

class AmbientMessage : public Message
{
private:
	std::string MessageContent{};

public:
	AmbientMessage();
	virtual ~AmbientMessage() override = default;
};

