#pragma once

#include <string>
#include <iostream>

#include "GameEngine.h"
#include "Room.h"

namespace dung
{
	class Enemy;
	class Item;
	class Weapon;
	class Tool;

	// Represents the game player.
	class Player
	{
	public:
		// Should contain attributes like currentRoom and healthPoints.

		Player();
		Player(std::string name);
		Player(int hp, std::string name);

		// There's no constructor that fulfills _currentRoom 
		// because you shouldn't be initializing a player during gameplay
		// where the engine should require the player to spawn in the room.

		void AddItem(Item item);

		void Attack(dung::Enemy& enemy, Weapon item);

		int Gethp();

		void Sethp(int hp);


		// for testing - cout GameEngine private member via friend class
		void displayFriendStuff(dung::GameEngine& eng) {
			std::cout << "Private engine member: " << eng._tempEngine << "\n";
		}

	private:
		// Player's hitpoints
		int _hp;
		// Player name
		std::string _name;
		// Pointer pointing to player's current room
		dung::Room* _currentRoom = nullptr;
		// Player's inventory
		std::vector<Item> _inventory;
	};
}

