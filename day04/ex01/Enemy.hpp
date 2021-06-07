#ifndef EX01_ENEMY_HPP
#define EX01_ENEMY_HPP

#include <iostream>

class Enemy {
public:
	Enemy(const std::string &type, int hp);
	Enemy(const Enemy &weapon);
	Enemy();

	virtual ~Enemy();

	const std::string &getType() const;
	int getHp() const;
	void setType(const std::string &type);
	void setHp(int hp);

	virtual void takeDamage(int damage);
	Enemy &operator=(Enemy const &enemy);


private:
	std::string _type;
	int _hp;
};


#endif //EX01_ENEMY_HPP
