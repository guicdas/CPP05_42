#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm(){
	this->target = "home";
	std::cout << "PresidentialPardonForm created by default!\n";
}

PresidentialPardonForm::PresidentialPardonForm( std::string s ) : AForm(){
	this->target = s;
	std::cout << s << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &P ){
	std::cout << "PresidentialPardonForm Copy created!\n";
	*this = P;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm &P ){
	std::cout << "PresidentialPardonForm Copy created!\n";

	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm( void ){
	std::cout << "PresidentialPardonForm destroyed!\n";
}

