#include "whatever.hpp"

int main() {
	{
		int a = 1;
		int b = 2;

		std::string str1 = "1 simple str1";
		std::string str2 = "2 simple str2";
		std::string c = ::max(str1, str2);

		std::cout << ::max(a, b) << std::endl;
		std::cout << ::max(str1, str2) << std::endl;
		std::cout << c << std::endl;
	}
	{
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
		return 0;
	}
}
