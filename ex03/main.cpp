#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main( void ){

	std::cout << "//\tTESTING EMPTY STRING:\t\n\n";
	try
	{
		Intern someRandomIntern;
		Form *RRF;

		RRF = someRandomIntern.makeForm("", "bender");
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << "\n//\tTESTING bad case:\t\n\n";
	try
	{
		Intern someRandomIntern;
		Form *RRF;

		RRF = someRandomIntern.makeForm("rrf", "bender");
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << "\n//\tTESTING normal ROBOTOMY:\t\n\n";
	try
	{
		Intern someRandomIntern;
		Form *RRF;

		RRF = someRandomIntern.makeForm("robotomy request", "bender");
		delete RRF;
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << "\n//\tTESTING normal SHRUBBERY:\t\n\n";
	try
	{
		Intern someRandomIntern;
		Form *SCF;

		SCF = someRandomIntern.makeForm("shrubbery creation", "bender");
		delete SCF;
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << "\n//\tTESTING normal PRESIDENTIAl:\t\n\n";
	try
	{
		Intern someRandomIntern;
		Form *PPF;

		PPF = someRandomIntern.makeForm("presidential pardon", "bender");
		delete PPF;
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
}
