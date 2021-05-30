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
		our_file.open(*getStrFileName(), std::fstream::in | std::fstream::out);
		our_file.exceptions (std::fstream::eofbit | std::fstream::failbit |
		std::fstream::badbit);
	}
	catch (std::exception const& e) {
		std::cout << "Error while open file: "<< *getStrFileName() <<
		std::endl;
		std::cout << e.what() << std::endl;
		our_file.close();
		return;
	}


	std::string tmp_line, full_line;
	char *buffer = nullptr;
	while (our_file)
	{
		our_file.getline(buffer, 100);
		tmp_line = buffer;
		full_line += tmp_line;
	}
	size_t len = getStrFind()->length();
	size_t len_replace = getStrForReplace()->length();
	size_t found = 0;
	while (std::string::npos != full_line.find(*getStrFind(), found))
	{
		full_line.replace(found, len_replace, *getStrForReplace());
		found += len;
	}
	our_file.close();
}


void pars::checkArguments() {
	std::cout << "FILENAME:\t" << *getStrFileName() << std::endl;
	std::cout << "STR_TO_FIND:\t" << *getStrFind() << std::endl;
	std::cout << "STR_TO_REPLACE:\t" << *getStrForReplace() << std::endl;
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
//	if (_strForReplace)
//		delete[] _strFileName;
//	if (_strFind)
//		delete[] _strFind;
//	if (_strForReplace)
//		delete[] _strForReplace;
}

