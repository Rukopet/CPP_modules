#ifndef EX00_SORCERER_HPP
#define EX00_SORCERER_HPP

#include "Victim.hpp"

class Sorcerer {
public:
	Sorcerer(const std::string &name, const std::string &title);
	Sorcerer(Sorcerer const &sorc);
	Sorcerer();


	virtual ~Sorcerer();
	const std::string &getName() const;
	const std::string &getTitle() const;
	void polymorph(Victim const &victim);
	Sorcerer &operator=(Sorcerer const &right);

private:
	std::string _name;
	std::string _title;

};
	std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer);

#endif //EX00_SORCERER_HPP
