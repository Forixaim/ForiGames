#pragma once
#include "Message.h"

//A Generic Kill Message Abstract Class
class KillMessage : public Message
{
public:
	//Default Constructor, won't do anything since it's generic
	KillMessage() = default;
	//Won't Do Anything
	virtual ~KillMessage() override = default;

};

