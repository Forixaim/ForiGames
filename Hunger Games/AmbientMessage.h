#pragma once
#include "Message.h"

class AmbientMessage : public Message
{
public:
	AmbientMessage();
	virtual ~AmbientMessage() override = default;
};

