#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ){
	std::cout << "PresidentialPardonForm created by default!\n";
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &P ){
	std::cout << "PresidentialPardonForm Copy created!\n";
	*this = P;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm &P ){
	std::cout << "PresidentialPardonForm Copy created!\n";
	if (this != &P)

	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm( void ){
	std::cout << "PresidentialPardonForm destroyed!\n";
}

50)
		throw GradeTooLowException();
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &P ){
	std::cout << "PresidentialPardonForm Copy created!\n";
	*this = P;
}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm &P ){
	std::cout << "PresidentialPardonForm Copy created!\n";
	if (this != &P)

	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm( void ){
	std::cout << "PresidentialPardonForm destroyed!\n";
}

