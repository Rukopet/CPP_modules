#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

template <typename T>
void iter(T *array, unsigned int length, void(*func)(T&)) {
	for (unsigned int i = 0; i < length; ++i) {
		(*func)(array[i]);
	}
}

#endif //EX01_ITER_HPP
