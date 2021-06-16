#include "Squad.hpp"

Squad::Squad() : _count(0), _begin_list(0) {}

Squad::Squad(const Squad & copy)
{
	t_list *tmp_for_delete;
	t_list *tmp_next;
	tmp_for_delete = this->_begin_list;
	for (int i = 0; i < this->getCount(); ++i)
	{
		tmp_next = tmp_for_delete->next;
		delete tmp_for_delete;
		tmp_for_delete = tmp_next;
	}
	t_list *begin_list_tmp_copy;
	begin_list_tmp_copy = copy._begin_list;
	for (int i = 0; i < copy.getCount(); ++i)
	{
		this->push(begin_list_tmp_copy->data->clone());
		begin_list_tmp_copy = begin_list_tmp_copy->next;
	}
	delete copy._begin_list;
}

int Squad::getCount() const {
	return (int)_count;
}

int Squad::push(ISpaceMarine *marine) {
	t_list *tmp_begin_list;
	tmp_begin_list = this->_begin_list;
	if (!marine)
		return 0;
	if (!this->_begin_list)
	{
		this->_begin_list = new t_list ;
		this->_begin_list->data = marine;
		this->_begin_list->next = 0;
		this->_begin_list->index = 0;
		return 1;
	}
	int i = 0;
	while (tmp_begin_list->next)
	{
		tmp_begin_list = tmp_begin_list->next;
		++i;
	}
	tmp_begin_list->next = new t_list;
	tmp_begin_list->next->data = marine;
	tmp_begin_list->next->index = i + 1;
	tmp_begin_list->next->next = 0;
	++this->_count;
	return 1;
}

Squad::~Squad() {
	t_list *next;

	next = _begin_list->next;
	while (_begin_list)
	{
		next = _begin_list->next;
		delete _begin_list->data;
		delete _begin_list;
		_begin_list = next;
	}

//	for(int i = 0; i < this->getCount(); i++)
//	{
//		next = this->_begin_list->next;
//		delete this->_begin_list->data;
//		delete this->_begin_list;
//		this->_begin_list = next;
//	}
}

ISpaceMarine *Squad::getUnit(int i) const {
	t_list *tmp_begin_list = this->_begin_list;
	bool flag = false;
	while (tmp_begin_list->next)
	{
		tmp_begin_list = tmp_begin_list->next;
		if (tmp_begin_list->index == i)
		{
			flag = true;
			break;
		}
	}
	if (!flag)
		return 0;
	return tmp_begin_list->data;
}
