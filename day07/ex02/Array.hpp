#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
private:
	T *_array;
	unsigned int _length;
public:
	Array() : _array(), _length(0) {};
	Array(unsigned int length) : _array(new T[length]), _length(length) {};

	Array(Array &cp) {
		this->_length = cp.size();
		this->_array = new T[cp.size()];
		for (int i = 0; i < cp.size(); ++i) {
			this->_array[i] = cp._array[i];
		}
	}

	virtual ~Array() {delete[] _array;};
	T *getArray() const {return _array;}
	unsigned int size() const {return _length;}

struct ArrayException : public std::exception {
	ArrayException() throw() {};
	virtual const char* what() const throw() {return "out of array bounds";}
	};

	T& operator[](unsigned int i) {
		if (i > this->_length)
			throw ArrayException();
		return this->_array[i];
	}

	Array &operator=(const Array& op)
	{
		if (this->_length)
			delete[] this->_array;
		this->_array = new T[op.size()];
		this->_length = op.size();
		for (int i = 0; i < this->size(); i++)
			this->_array[i] = op._array[i];
		return *this;
	};

};


#endif //EX02_ARRAY_HPP
