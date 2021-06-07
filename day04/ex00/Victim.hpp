#ifndef EX00_VICTIM_HPP
#define EX00_VICTIM_HPP

#include <iostream>

class Victim {
public:
	Victim(const std::string &name);
	Victim(Victim const &vict);
	Victim();

	virtual ~Victim();
	virtual void getPolymorphed() const;

	const std::string &getName() const;
	void setName(const std::string &name);

	Victim &operator=(Victim const &right);



private:
	std::string _name;

};

	std::ostream &operator<<(std::ostream &os, const Victim &victim);

#endif //EX00_VICTIM_HPP
