#include "Elements.h"

std::string Elements::GetElement(Element EnumInput)
{
	return this->ElementString.at(EnumInput);
}