#pragma once
#include <iostream>
#include <cmath>
#include <random>
//A Generic Message Abstract Class
class Message
{
private:
	std::string MessageContent{};
public:
	Message();
	virtual ~Message() = 0;
};
