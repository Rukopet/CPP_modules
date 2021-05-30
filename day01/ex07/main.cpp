#include "pars.hpp"

int main(int argc, char **argv) {
	pars P;

	if (argc != 4)
	{
		std::cerr << "replace: Bad arguments!" << std::endl;
		return -1;
	}
	if (!P.parseArgv(argv))
		return (-1);
	P.checkArguments();
	return 0;
}
