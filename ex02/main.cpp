#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void ){
	std::cout << "//\tTESTING FORMS:\t\n\n";
	try
	{
		AForm PPF("PPF", 0, 10);
		std::cout << PPF << std::endl;
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	try
	{
		AForm RRF("RRF", 10, 0);
		std::cout << RRF << std::endl;
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	try
	{
		AForm SCF("SCF", 151, 151);
		std::cout << SCF << std::endl;
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << "//\tTESTING SIGNING FORMS:\n//\tSIGN\n";
	try
	{
		Bureaucrat lower("lower", 40);
		ShrubberyCreationForm higherForm("higherForm");
		lower.signForm(higherForm); //e suposto?
		lower.executeForm(higherForm);
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << "\n//normal case SCF\n";
	std::cout << "\n//normal case RRF\n";
	std::cout << "\n//normal case PPF\n";
}