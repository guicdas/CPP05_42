#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main( void ){

	std::cout << "//\tTESTING EMPTY STRING:\t\n\n";
	try
	{
		Intern someRandomIntern;
		AForm *RRF;

		RRF = someRandomIntern.makeForm("", "bender");
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << "\n//\tTESTING normal case:\t\n\n";
	try
	{
		Intern someRandomIntern;
		AForm *RRF;

		RRF = someRandomIntern.makeForm("rrf", "bender");
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
}
