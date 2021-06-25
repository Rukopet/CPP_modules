#include "Span.hpp"

Span::Span(unsigned int maxMemory) : _max_memory(maxMemory) {}

Span::Span(Span &cp) {
	this->_values = cp._values;
	this->_max_memory = cp._max_memory;
}

unsigned long Span::shortestSpan() {
	if (this->_values.size() < 2)
		throw Span::CantSpan();
	unsigned long shortest = std::numeric_limits<unsigned long>::max();

	for (size_t i = 0; i < this->_values.size() - 1; ++i)
		if (static_cast<unsigned long>(this->_values[i + 1]) - static_cast<unsigned long>(this->_values[i]) < shortest)
			shortest = static_cast<unsigned long>(this->_values[i + 1]) - static_cast<unsigned long>(this->_values[i]);
	return shortest;
}

unsigned long Span::longestSpan() {
	if (this->_values.size() < 2)
		throw Span::CantSpan();
	std::pair<std::__wrap_iter<int *>, std::__wrap_iter<int *> > ret =
			std::minmax_element(this->_values.begin(), this->_values.end());
	return std::abs(*ret.second - *ret.first);
}

void Span::addNumber(int number) {
	if (this->_values.size() >= this->_max_memory)
		throw Span::AlreadyStored();
	this->_values.push_back(number);
}

Span & Span::operator=(const Span& op)
{
	if (this == &op)
		return (*this);
	this->_max_memory = op._max_memory;
	this->_values = op._values;
	return (*this);
}

