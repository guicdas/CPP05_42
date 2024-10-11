#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm(), sign(72), exec(45){
	this->target = "home";
	std::cout << "RobotomyRequestForm created by default!\n";
}

RobotomyRequestForm::RobotomyRequestForm( std::string s ) : AForm(), sign(72), exec(45){
	this->target = s;
	std::cout << "PresidentialPardonForm created with:\n\t" \
	<< "Sign Grade:\t\t"<< this->sign \
	<< "\n\tExecution Grade:\t" << this->exec \
	<< "\n\tTarget: \t\t" << this->target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &r ) : AForm(r), sign(72), exec(45){
	std::cout << "RobotomyRequestForm Copy created!\n";
	*this = r;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm &r ){
	std::cout << "RobotomyRequestForm Copy created!\n";
	if (this != &r)
		this->target = r.target;

	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm( void ){
	std::cout << "RobotomyRequestForm destroyed!\n";
}

void RobotomyRequestForm::ExecuteAction( void ){
	std::cout << "*Makes drilling noises*\n";
	std::srand(std::time(0));
	if ((rand() % 2 + 1) == 1)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
}