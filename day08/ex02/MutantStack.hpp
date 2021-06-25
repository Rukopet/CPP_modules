#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <iterator>
#include <vector>

////https://coderoad.ru/525365/%D0%92%D1%8B%D1%81%D1%82%D0%B0%D0%B2%D0%BB%D1%8F%D0%B5%D1%82-%D0%BB%D0%B8-std-stack-%D0%B8%D1%82%D0%B5%D1%80%D0%B0%D1%82%D0%BE%D1%80%D1%8B


template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	MutantStack() : std::stack<T, Container>() {};
	MutantStack(const MutantStack& copy) : std::stack<T, Container> (copy){};
	virtual ~MutantStack() {};

	MutantStack &operator=(const MutantStack &op)
	{
		std::stack<T>::operator=(op);
		return (*this);
	};

	iterator begin() { return std::begin(std::stack<T, Container>::c); };
	const_iterator begin() const { return std::begin(std::stack<T, Container>::c); };

	iterator end() { return std::end(std::stack<T, Container>::c); };
	const_iterator end() const { return std::end(std::stack<T, Container>::c); };

	reverse_iterator rbegin() { return std::stack<T>::c.rbegin(); };
	const_reverse_iterator rbegin() const { return std::stack<T>::c.rbegin(); };

	reverse_iterator rend() { return std::stack<T>::c.rend(); };
	const_reverse_iterator rend() const { return std::stack<T>::c.rend(); };
};

#endif //EX02_MUTANTSTACK_HPP
