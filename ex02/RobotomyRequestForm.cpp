#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm(){
	std::cout << "RobotomyRequestForm created by default!\n";
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

