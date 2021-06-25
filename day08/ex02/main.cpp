
#include "MutantStack.hpp"

template<typename T, typename Container = std::deque<T> >
class iterable_stack : public std::stack<T, Container>
{
public:

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin() { return std::begin(std::stack<T, Container>::c); }
	iterator end() { return std::end(std::stack<T, Container>::c); }

	iterator begin() const { return std::begin(std::stack<T, Container>::c); }
	iterator end() const { return std::end(std::stack<T, Container>::c); }
};

int main()
{
	MutantStack<int> st;

	st.push(2);
	st.push(5);
	st.push(3);
	st.push(7);
	st.push(9);

	{
		MutantStack<int>::iterator a = st.begin();
		for (; a != st.end(); ++a) {
			std::cout << *a << std::endl;
		}
		std::cout << "-------------------------------" << std::endl;
	}
	{
		MutantStack<int>::reverse_iterator a = st.rbegin();
		for (; a != st.rend(); ++a) {
			std::cout << *a << std::endl;
		}
		std::cout << "-------------------------------" << std::endl;
	}


//	for(auto i: st)
//		std::cout << i << ' ';
//	std::cout << '\n';


	return (0);
}