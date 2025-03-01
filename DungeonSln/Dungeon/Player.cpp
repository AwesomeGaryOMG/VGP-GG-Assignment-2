#include "Player.h"

using namespace dung;

Player::Player() :_hp(100), _name("") {};

Player::Player(std::string name) :_hp(100), _name(name) {};

Player::Player(int hp, std::string name) :_hp(hp), _name(name) {};

//incomplete type dung::Item is not allowed
void dung::Player::AddItem(Item item)
{
	_inventory.push_back(item);
}

//incomplete type dung::Weapon is not allowed
void dung::Player::Attack(dung::Enemy& enemy, Weapon item)
{
}

int dung::Player::Gethp()
{
	return _hp;
}

void dung::Player::Sethp(int hp)
{
	_hp = hp;
}


