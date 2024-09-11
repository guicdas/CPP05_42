#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm() {
	std::cout << "ShrubberyCreationForm created by default!\n";
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &S ) : AForm(S){
	std::cout << "ShrubberyCreationForm Copy created!\n";
	*this = S;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm &S ){
	std::cout << "ShrubberyCreationForm Copy created!\n";
	if (this != &S)

	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){
	std::cout << "ShrubberyCreationForm destroyed!\n";
}

