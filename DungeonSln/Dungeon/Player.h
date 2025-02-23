#pragma once

#include <string>
#include <iostream>

#include "GameEngine.h"

namespace dung
{
	// Represents the game player.
	class Player
	{
	public:
		// Should contain attributes like currentRoom and healthPoints.

		Player() :_tempP("") {};
		Player(std::string name) :_tempP(name) {};

		// for testing
		void setTempP(std::string name) { _tempP = name; }

		// for testing
		std::string getTempP() { return _tempP; }

		// for testing
		void displayFriendStuff(dung::GameEngine& eng) {
			std::cout << "Private engine member: " << eng._tempEngine << "\n";
		}

	private:
		// for testing
		std::string _tempP;
	};
}

