#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("SCF"), sign(145), exec(137){
	std::cout << "ShrubberyCreationForm created by default!\n";
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string s ) : AForm("SCF"), sign(145), exec(137){
	this->target = s;
	std::cout << "ShrubberyCreationForm created with:\n\t" \
	<< "Sign Grade:\t\t"<< this->sign \
	<< "\n\tExecution Grade:\t" << this->exec \
	<< "\n\tTarget: \t\t" << this->target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &S ) : AForm(S), sign(145), exec(137){
	std::cout << "ShrubberyCreationForm Copy created!\n";
	*this = S;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm &S ){
	std::cout << "ShrubberyCreationForm Copy created!\n";
	if (this != &S)
		this->target = S.target;

	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){
	std::cout << "ShrubberyCreationForm destroyed!\n";
}

void ShrubberyCreationForm::ExecuteAction(void) const{
	std::cout << "Created file " << target << "_shrubbery" << "in the working dir" << std::endl; //dir
}
