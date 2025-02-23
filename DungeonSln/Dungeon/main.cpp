#include <iostream>

#include "GameEngine.h"
#include "Player.h"
#include "Room.h"

int main()
{
	// test stuff
	using namespace std;

	cout << "Hello World!\n";

	// GameEngine class "test"
	dung::GameEngine test("testName");

	// cout its private member via a getter
	cout << "test engine member: " << test.getTempE() << "\n";

	// Player class "ptest"
	dung::Player ptest("Player Test");

	// cout "test" private member using "ptest" with the help of friend class
	ptest.displayFriendStuff(test);

	// end test

	return 0;
}