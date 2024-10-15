#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main( void ){

	std::cout << "//\tTESTING FORMS:\t\n\n";
	try
	{
		AForm form("form", 0, 10);
		std::cout << form << std::endl;
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << "//\tTESTING SIGNING FORMS:\n//\tSIGN\n";
	try
	{
		Bureaucrat lower("lower", 150);
		ShrubberyCreationForm higherForm("higherForm");
		lower.signForm(higherForm);
		std::cout << higherForm.getConfirmed() << std::endl;
		lower.executeForm(higherForm);
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << "\n//normal case SCF\n";
	try
	{
		Bureaucrat normal("normal", 40);
		ShrubberyCreationForm SCForm("SCForm");
		normal.signForm(SCForm);
		std::cout << SCForm.getConfirmed() << std::endl;
		normal.executeForm(SCForm);
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << "\n//normal case PPF (sign)\n";
	try
	{
		Bureaucrat normal("normal", 24);
		PresidentialPardonForm PPForm("PPForm");
		normal.signForm(PPForm);
		std::cout << PPForm.getConfirmed() << std::endl;
		normal.executeForm(PPForm);
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << "\n//normal case PPF\n";
	try
	{
		Bureaucrat normal("normal", 4);
		PresidentialPardonForm PPForm("PPForm");
		normal.signForm(PPForm);
		std::cout << PPForm.getConfirmed() << std::endl;
		normal.executeForm(PPForm);
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
	std::cout << "\n//normal case RRF\n";
		try
	{
		Bureaucrat normal("normal", 44);
		RobotomyRequestForm RRForm("RRForm");
		normal.signForm(RRForm);
		std::cout << RRForm.getConfirmed() << std::endl;
		normal.executeForm(RRForm);
	}
	catch (std::exception &e){std::cout << e.what() << std::endl;}
}
