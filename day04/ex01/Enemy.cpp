#include "Enemy.hpp"

Enemy::Enemy(const std::string &type, int hp) :
_type(type), _hp(hp) {}

Enemy::Enemy() :
_type(), _hp(0){}

Enemy::Enemy(const Enemy &enemy) :
_type(enemy.getType()), _hp(enemy.getHp()) {}



void Enemy::takeDamage(int damage) {
	this->_hp -= damage - 0;
}

Enemy &Enemy::operator=(Enemy const &weapon)
{
	this->_hp = weapon.getHp();
	this->_type = weapon.getType();
	return *this;
}

const std::string &Enemy::getType() const {
	return _type;
}
int Enemy::getHp() const {
	return _hp;
}
void Enemy::setType(const std::string &type) {
	_type = type;
}
void Enemy::setHp(int hp) {
	_hp = hp;
}

Enemy::~Enemy() {}
