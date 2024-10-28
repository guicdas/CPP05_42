#include "Intern.hpp"

Intern::Intern( void ){
	std::cout << "Intern created by default!\n";
}

Intern::Intern( Intern const &I ){
	std::cout << "Intern Copy created!\n";
	*this = I;
}

Intern& Intern::operator=( Intern const &I ){
	std::cout << "Intern Copy created!\n";
	(void) I;

	return (*this);
}

Intern::~Intern( void ){
	std::cout << "Intern destroyed!\n";
}

static	Form *makeFormSCF( std::string s ){return (new ShrubberyCreationForm(s));}
static	Form *makeFormPPF( std::string s ){return (new PresidentialPardonForm(s));}
static	Form *makeFormRRF( std::string s ){return (new RobotomyRequestForm(s));}

Form *Intern::makeForm( std::string s1, std::string s2 ) const{
	Form * (*formCreators[])(std::string s) = {&makeFormSCF, &makeFormRRF, &makeFormPPF};
	std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++)
	{
		if (strcmp(formNames[i].c_str(), s1.c_str()) == 0)
		{
			std::cout << i << " Intern creates " << s1 << " with " << s2 << " as target" << std::endl;
			return (formCreators[i](s2));
		}
	}
	throw (EmptyStringException());
}

const char *Intern::EmptyStringException::what(void) const throw(){
	return ("Form name doesn't match any available form types!");
}
