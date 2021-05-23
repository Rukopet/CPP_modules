#include "Pony.hpp"

Pony::Pony() {
	_allocatedVar = new std::string("Yes, it`s allocated var");
};

Pony::~Pony() {
	delete _allocatedVar;
};


std::string Pony::_takeInput(const std::string& Promt) {
	std::string input;
	std::cout << Promt;
	std::cin >> input;
	if (std::cin.eof())
	{
		std::cout << "Whoops, unexpected happens o_O" << std::endl;
		exit(0);
	}
	return input;
};


const std::string &Pony::getNickname() const {
	return _nickname;
}
const std::string &Pony::getColor() const {
	return _color;
}
const std::string &Pony::getWeight() const {
	return _weight;
}

void Pony::setNickname(const std::string &nickname) {
	_nickname = nickname;
}
void Pony::setColor(const std::string &color) {
	_color = color;
}
void Pony::setWeight(const std::string &weight) {
	_weight = weight;
}