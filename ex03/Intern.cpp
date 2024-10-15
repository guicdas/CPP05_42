#include "Intern.hpp"

Intern::Intern( void ){
	std::cout << "Intern created by default!\n";
}

Intern::Intern( const Intern &I ){
	std::cout << "Intern Copy created!\n";
	*this = I;
}

Intern& Intern::operator=( const Intern &I ){
	std::cout << "Intern Copy created!\n";
	(void) I;

	return (*this);
}

Intern::~Intern( void ){
	std::cout << "Intern destroyed!\n";
}

AForm *Intern::makeForm( std::string s1, std::string s2 ) const{
	try 
	{
		if (s1.length() < 1)
			throw (EmptyStringException());
		std::cout << "Intern creates " << s1 << " with " << s2 << " as target" << std::endl;
		if (strcmp(s1, "shrubbery request") == 0)
		{
			ShrubberyCreationForm scf(s2);
			return (scf);
		}
		else if (strcmp(s1, "") == 0)

		else if ()
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	return (NULL);
}

const char *Intern::EmptyStringException::what(void) const throw(){
	return ("Form name cannot be empty!");
}
