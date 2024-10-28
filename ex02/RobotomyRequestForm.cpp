#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm("RRF", 72, 45), sign(72), exec(45){
	this->target = "home";
	std::cout << "RobotomyRequestForm created by default!\n";
}

RobotomyRequestForm::RobotomyRequestForm( std::string s ) : AForm("RRF", 72, 45), sign(72), exec(45){
	this->target = s;
	std::cout << "PresidentialPardonForm created with:\n\t" \
	<< "Sign Grade:\t\t"<< this->sign \
	<< "\n\tExecution Grade:\t" << this->exec \
	<< "\n\tTarget: \t\t" << this->target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &r ) : AForm(r), sign(72), exec(45){
	std::cout << "RobotomyRequestForm Copy created!\n";
	*this = r;
}

RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const &r ){
	std::cout << "RobotomyRequestForm Copy created!\n";
	if (this != &r)
		this->target = r.target;

	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm( void ){
	std::cout << "RobotomyRequestForm destroyed!\n";
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const{
	int	chance;
	std::srand(std::time(0));
	
	if (executor.getGrade() > this->exec)
		throw (BureaucratGradeTooLowException());
	std::cout << "*Makes drilling noises*\n";
	chance = rand() % 99;
	if (chance > 49)
		std::cout << this->target << " has been robotomized successfully (chance: "<< chance << ")\n";
	else
		std::cout << "Robotomy failed (chance: "<< chance << ")\n";

}