#pragma once

#include "Item.h"

// Weapons hurt
class Weapon : Item
{
public:
	Weapon(std::string name);
	Weapon(std::string name, int dmg);

	// Either this thing returns something or not, and maybe this thing uses pointers from the entity using it.
	//int attack();

private:
	// This weapon deals damage
	int _dmg;
};

