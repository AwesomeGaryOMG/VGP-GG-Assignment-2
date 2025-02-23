#include <iostream>

#include "GameEngine.h"
#include "Player.h"
#include "Room.h"

int main()
{
	// no
	using namespace std;

	cout << "Hello World!\n";

	dung::GameEngine test("testName");

	cout << "test engine member: " << test.getTempE() << "\n";

	dung::Player ptest("Player Test");

	ptest.displayFriendStuff(test);

	return 0;
}