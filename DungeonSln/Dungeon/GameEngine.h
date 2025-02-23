#pragma once

#include <string>

namespace dung
{
	class Player;
	class Room;
	// Controls the game ﬂow, including room navigation and interactions.
	class GameEngine
	{
	public:
		// Should manage the game logic, including moving the player
		// between rooms, triggering room effects (items or traps), and
		// checking game status (win/loss conditions).

		GameEngine() :_tempEngine("") {};
		GameEngine(std::string name) :_tempEngine(name) {};

		// for testing
		void setTempE(std::string name) { _tempEngine = name; }

		// for testing
		std::string getTempE() { return _tempEngine; }


		friend class dung::Player;
		friend class dung::Room;

	private:
		// for testing
		std::string _tempEngine;
	};
}

