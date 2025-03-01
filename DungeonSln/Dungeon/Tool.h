#pragma once

#include "Item.h"

// Tools can be single use or reusable
class Tool : Item
{
public:
	Tool(std::string name);
	Tool(std::string name, int healAmt);


	
private:
	// How much hitpoints this tool restores. 0 means this tool does not heal.
	int _healAmt;
};

