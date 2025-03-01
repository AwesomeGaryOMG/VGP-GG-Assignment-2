#pragma once

#include "GameEngine.h"
#include "Room.h"

namespace dung
{
	class Player;

	// The bad guy(s) stopping you from dungeon raiding
	class Enemy
	{
	public:
		Enemy();
		Enemy(std::string name);
		Enemy(int atkpwr ,std::string name);
		Enemy(int hp, int atkpwr, std::string name);

		void attack(dung::Player* player);

		int Gethp();

		void Sethp(int hp);

	private:
		// Enemy's hitpoints
		int _hp;
		// Enemy's attack power
		int _atkpwr;
		// Enemy name
		std::string _name;
		// Pointer pointing to enemy's current room
		dung::Room* _currentRoom = nullptr;
	};
}

