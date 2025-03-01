#include "Player.h"

using namespace dung;

Player::Player() :_hp(100), _name("") {};

Player::Player(std::string name) :_hp(100), _name(name) {};

Player::Player(int hp, std::string name) :_hp(hp), _name(name) {};

