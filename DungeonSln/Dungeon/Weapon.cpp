#include "Weapon.h"

Weapon::Weapon(std::string name)
	:Item(name)
{
}

Weapon::Weapon(std::string name, int dmg)
	:Item(name), _dmg(dmg)
{
}

