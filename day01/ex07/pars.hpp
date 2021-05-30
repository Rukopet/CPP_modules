#ifndef EX07_PARS_HPP
#define EX07_PARS_HPP

#include <iostream>
#include <fstream>

class pars {
public:
	pars();
	virtual ~pars();

	bool parseArgv(char **argv);
	void checkArguments();
	void replaceArguments();

private:
	std::string _strFind;
	std::string _strForReplace;
	std::string _strFileName;

	std::string getStrFind() const;
	std::string getStrForReplace() const;
	std::string getStrFileName() const;

	void setStrFind(std::string &strFind);
	void setStrForReplace(std::string &strForReplace);
	void setStrFileName(std::string &strFileName);
	bool takeArg(char *arg, std::string &strToEnter);
};


#endif //EX07_PARS_HPP
