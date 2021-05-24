#include <iostream>

int main() {
	std::string kek =  "HI THIS IS BRAIN";
	std::string *kekpointer = &kek;
	std::string &ref_kek = kek;
	std::cout << kek << std::endl;
	std::cout << *kekpointer << std::endl;
	std::cout << ref_kek << std::endl;
	return 0;
}
