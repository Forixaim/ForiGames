#pragma once
#include <iostream>
#include <cmath>
//A Generic Message Abstract Class
class Message
{
private:
	std::string MessageContent{};
public:
	Message();
	virtual ~Message() = 0;
};
