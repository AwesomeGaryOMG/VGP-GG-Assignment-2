#pragma once

#include <string>

// Various items have uses, such as weapons for combat and consumables for use.
class Item
{
public:
	//Item();
	Item(std::string name);

private:
	// The item's name;
	std::string _name;
};

