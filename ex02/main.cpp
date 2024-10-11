#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void ){
	std::cout << "//\tTESTING FORMS:\t\n\n";
	try
	{
		Form tooHigh1("tooHigh1", 0, 10);
		std::cout << tooHigh1 << std::endl;
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	try
	{
		Form tooHigh2("tooHigh2", 10, 0);
		std::cout << tooHigh2 << std::endl;
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	try
	{
		Form tooLow("tooLow", 151, 151);
		std::cout << tooLow << std::endl;
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << "//\tTESTING SIGNING FORMS:\t\n//signForm\n";
	try
	{
		Bureaucrat low("low", 40);
		Form form("form", 10, 20);
		low.signForm(form);
		std::cout << low << std::endl;
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << "\n//normal case\n";
	try
	{
		Bureaucrat high("high", 1);
		Form form("form", 10, 20);
		high.signForm(form);
		std::cout << high << std::endl;
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
}