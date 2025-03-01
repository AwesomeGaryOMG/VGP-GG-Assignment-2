#include <iostream>

#include "Enemy.h"
#include "GameEngine.h"
#include "Item.h"
#include "Player.h"
#include "Room.h"
#include "Tool.h"
#include "Weapon.h"

int main()
{
	// Ini
	using namespace std;

	Weapon sword("Sword", 10);
	Weapon bigsword("Big Sword", 20);

	vector<Item> Weapons{ sword, bigsword };


	Tool healpot("Heal Potion", 20);
	Tool betterhealpot("Better Heal Potion", 40);

	vector<Item> Tools{ healpot, betterhealpot };

	using namespace dung;

	// test stuff

	Player bob("Bob");
	Enemy mut("Mut");

	bob.AddItem(sword);
	// obviously bob needs to access his inventory, not the variable in main
	bob.Attack(mut, sword);


	return 0;
}