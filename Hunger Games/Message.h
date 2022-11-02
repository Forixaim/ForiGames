#pragma once
#include <iostream>
#include <cmath>
#include <random>
#include <array>
#include <vector>
//A Generic Message Abstract Class
class Message
{
private:
	std::string MessageContent{};
public:
	Message();
	virtual ~Message() = 0;
};
