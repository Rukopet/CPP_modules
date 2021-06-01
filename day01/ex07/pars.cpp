#include "pars.hpp"

pars::pars() {}


bool pars::takeArg(char *arg, std::string &strToEnter) {
	if (arg == nullptr)
		return false;
	strToEnter = std::string(arg);
	return true;
}


void pars::replaceArguments() {
	std::fstream our_file;

	try {
		our_file.open(getStrFileName(), std::fstream::in | std::fstream::out);
	}
	catch (std::exception const& e) {
		std::cout << "Error while open file: "<< getStrFileName() <<
		std::endl;
		std::cout << e.what() << std::endl;
		our_file.close();
		return;
	}

	std::stringstream line_stream;
	std::string full_line;

	line_stream << our_file.rdbuf();
	full_line = line_stream.str();

	size_t len = getStrFind().length();
	size_t len_replace = getStrForReplace().length();
	size_t found = 0;
	while (std::string::npos != (found = full_line.find(getStrFind(), found)))
	{
		full_line.replace(found, len, getStrForReplace());
		found += len;
	}
	our_file.close();

	std::ofstream nico;
	try {
		nico.open(getStrFileName() + ".replace", std::ifstream::in |
		std::ifstream::trunc);
	}
	catch (std::exception const& e) {
		std::cout << "Error while open file: "<< getStrFileName() <<
				  std::endl;
		std::cout << e.what() << std::endl;
		our_file.close();
		return;
	}
	nico << full_line;
	nico.close();
}


void pars::checkArguments() {
	std::cout << "FILENAME:\t" << getStrFileName() << std::endl;
	std::cout << "STR_TO_FIND:\t" << getStrFind() << std::endl;
	std::cout << "STR_TO_REPLACE:\t" << getStrForReplace() << std::endl;
}


bool pars::parseArgv(char **argv) {
	std::string filename, strfind, strreplace;
	if (!takeArg(argv[1], filename) || !takeArg(argv[2], strfind) || \
	!takeArg(argv[3], strreplace) || argv[4] != nullptr)
	{
		std::cerr << "replace: Bad arguments!" << std::endl;
		return false;
	}
	setStrFileName(filename);
	setStrFind(strfind);
	setStrForReplace(strreplace);
	return true;
}



std::string pars::getStrFind() const {
	return _strFind;
}
std::string pars::getStrForReplace() const {
	return _strForReplace;
}
std::string pars::getStrFileName() const {
	return _strFileName;
}



void pars::setStrFind(std::string &strFind) {
	_strFind = strFind;
}
void pars::setStrForReplace(std::string &strForReplace) {
	_strForReplace = strForReplace;
}
void pars::setStrFileName(std::string &strFileName) {
	_strFileName = strFileName;
}

pars::~pars() {
}

