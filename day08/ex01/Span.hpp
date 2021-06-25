#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <vector>
#include <list>
#include <utility>
#include <cmath>
#include <iostream>
#include <limits>

class Span {
private:
	unsigned int _max_memory;
	std::vector<int> _values;
public:
	Span(unsigned int maxMemory);
	Span(Span &cp);
	unsigned long shortestSpan();
	unsigned long longestSpan();
	void addNumber(int number);
	Span &operator=(const Span& op);

struct CantSpan : public std::exception {
	CantSpan() throw() {};
	virtual const char* what() const throw() {return "Cant span, too short!";}
};
struct AlreadyStored : public std::exception {
	AlreadyStored() throw() {};
	virtual const char* what() const throw() {return "This value already stored";}
};

};


#endif //EX01_SPAN_HPP
