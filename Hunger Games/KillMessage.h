#pragma once
#include "Message.h"
class KillMessage : public Message
{
public:
	KillMessage() = default;
	virtual ~KillMessage() override = default;

};

