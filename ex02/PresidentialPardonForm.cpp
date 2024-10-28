#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm("PPF", 25, 5), sign(25), exec(5){
	this->target = "home";
	std::cout << "PresidentialPardonForm created by default!\n";
}

PresidentialPardonForm::PresidentialPardonForm( std::string s ) : AForm("PPF", 25, 5), sign(25), exec(5){
	this->target = s;
	std::cout << "PresidentialPardonForm created with:\n\t" \
	<< "Sign Grade:\t\t"<< this->sign \
	<< "\n\tExecution Grade:\t" << this->exec \
	<< "\n\tTarget: \t\t" << this->target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &P ) : AForm(P), sign(25), exec(5){
	std::cout << "PresidentialPardonForm Copy created!\n";

	*this = P;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( PresidentialPardonForm const &P ){
	std::cout << "PresidentialPardonForm Copy created!\n";
	if (this != &P)
		this->target = P.target;

	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm( void ){
	std::cout << "PresidentialPardonForm destroyed!\n";
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const{
	if (executor.getGrade() > this->exec)
		throw (BureaucratGradeTooLowException());
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}