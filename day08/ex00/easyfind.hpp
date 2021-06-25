#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
int			easyfind(T &t, int n)
{
	typename T::iterator ret;
	
	if (t.end() == (ret = std::find(t.begin(), t.end(), n)))
		throw(std::exception());
	return (*ret);
}

#endif //EX00_EASYFIND_HPP
