#ifndef EX02_SQUAD_HPP
#define EX02_SQUAD_HPP

#include "ISquad.hpp"



class Squad : public ISquad {
public:
	Squad();
	Squad(const Squad & copy);

	virtual int getCount() const;
	int push(ISpaceMarine *marine);
	~Squad();
	ISpaceMarine *getUnit(int i) const;

private:
	typedef struct s_list
	{
		ISpaceMarine *data;
		int index;
		struct s_list *next;
	}				t_list;
	t_list *_begin_list;
	unsigned int _count;

};


#endif //EX02_SQUAD_HPP
