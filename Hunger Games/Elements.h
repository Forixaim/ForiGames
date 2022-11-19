#pragma once
#include <map>
#include <string>
#include <array>

enum Element
{
	FIRE,
	WATER,
	ICE,
	VOID,
	LIGHT,
	DARKNESS,
	WIND,
	EARTH,
	LIFE,
	DEATH,
	ORDER,
	LIGHTNING
};

class Elements
{
private:
	//Mapped to string characters
	std::array<std::string, 12> ElementString
	{
		"Fire",
		"Water",
		"Ice",
		"Void",
		"Light",
		"Darkness",
		"Wind",
		"Earth",
		"Life",
		"Death",
		"Order",
		"Lightning"
	};
public:
	Elements() = default;
	~Elements() = default;
	std::string GetElement(Element EnumInput);
};
