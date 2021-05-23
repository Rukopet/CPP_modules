#ifndef EX00_PONY_HPP
#define EX00_PONY_HPP

#include <iostream>

class Pony {
	std::string _nickname;
	std::string _color;
	std::string _weight;

	std::string *_allocatedVar;
	static std::string _takeInput(const std::string& Promt);

public:
	Pony();
	virtual ~Pony();

	const std::string &getNickname() const;
	const std::string &getColor() const;
	const std::string &getWeight() const;

	void setColor(const std::string &color);
	void setNickname(const std::string &nickname);
	void setWeight(const std::string &weight);

};


#endif //EX00_PONY_HPP
