#pragma once

#include <string>

namespace dung
{
	// Represents a room in the dungeon.
	class Room
	{
	public:
		// Should contain attributes like item, trap, and isExit.

		Room() :_tempR("") {};
		Room(std::string name) :_tempR(name) {};

		// for testing
		void setTempR(std::string name) { _tempR = name; }

		// for testing
		std::string getTempR() { return _tempR; }

	private:
		// for testing
		std::string _tempR;
	};
}

