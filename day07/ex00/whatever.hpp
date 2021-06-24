#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP

#include <iostream>
template <typename T>
T &max(T &a, T &b) {
	return (a > b) ? a : b;
}

template <typename T>
T &min(T &a, T& b) {
	return (a < b) ? a : b;
}

template <typename T>
void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

#endif //EX00_WHATEVER_HPP
