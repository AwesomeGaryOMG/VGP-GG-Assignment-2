#include "Enemy.h"

dung::Enemy::Enemy()
	:_hp(100), _atkpwr(10), _name("")
{
}

dung::Enemy::Enemy(std::string name)
	:_hp(100), _atkpwr(10), _name(name)
{
}

dung::Enemy::Enemy(int atkpwr, std::string name)
	:_hp(100), _atkpwr(atkpwr), _name(name)
{
}

dung::Enemy::Enemy(int hp, int atkpwr, std::string name)
	:_hp(hp),_atkpwr(atkpwr), _name(name)
{
}


void dung::Enemy::attack(dung::Player* player)
{
	//expression must have class type but it has type dung::Player
	player.Sethp(player.Gethp() - _atkpwr);
}

int dung::Enemy::Gethp()
{
	return _hp;
}

void dung::Enemy::Sethp(int hp)
{
	_hp = hp;
}


