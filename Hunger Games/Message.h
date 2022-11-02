#pragma once
#include <iostream>
#include <random>
#include <array>
#include <vector>
//A Generic Message Abstract Class
class Message
{
private:
	//The message content
	std::string MessageContent{};
public:
	//A Default Constructor
	Message() = default;
	//A virtual Destructor
	virtual ~Message() = default;
protected:
	//The random device
	std::random_device RandomDev;
	//The random engine
	std::default_random_engine RandomEngine {RandomDev()};
};
