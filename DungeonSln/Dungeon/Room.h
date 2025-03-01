#pragma once

#include <string>
#include <vector>

namespace dung
{
	// Represents a room in the dungeon.
	class Room
	{
	public:
		// Should contain attributes like item, trap, and isExit.

		Room(){};
		Room(int x, int y);


		

	private:
		// Is the room null?
		// If the position of the room is undefined then the room does not exist on the map.
		// Not to be confused with the room position as (0,0).
		int _nullroom;

		// Room position
		int _posx, _posy;


	};
}

