#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm(){
	this->target = "home";
	std::cout << "RobotomyRequestForm created by default!\n";
}

RobotomyRequestForm::RobotomyRequestForm( std::string s ) : AForm(){
	this->target = s;
	std::cout << "*Makes drilling noises*\n";
	std::srand(std::time(0));
	if ((rand() % 2 + 1) == 1)
		std::cout << s << " has been robotomized" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &R ) : AForm(R){
	std::cout << "RobotomyRequestForm Copy created!\n";
	*this = R;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm &R ){
	std::cout << "RobotomyRequestForm Copy created!\n";
	if (this != &R)

	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm( void ){
	std::cout << "RobotomyRequestForm destroyed!\n";
}

