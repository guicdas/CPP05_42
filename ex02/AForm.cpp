#include "AForm.hpp"

AForm::AForm( void ) : name("AForm"), confirmed(false), gradeRequired(150), gradeExecute(150){
	std::cout << "AForm created by default!\n";
}

AForm::AForm( const std::string name, const int gradeR, const int gradeExe ) : name(name), confirmed(false), gradeRequired(gradeR), gradeExecute(gradeExe){
	std::cout << "AForm " + name + " created with a " << gradeR << " required grade to sign, and a " << gradeExe << " to execute it!\n";
	if (gradeRequired < 1 || gradeExecute < 1)
		throw GradeTooHighException();
	else if (gradeRequired < 150 || gradeExecute < 150)
		throw GradeTooLowException();
}

AForm::AForm( const AForm &f ) : name(f.name), confirmed(false), gradeRequired(f.gradeRequired), gradeExecute(f.gradeExecute){
	std::cout << "AForm Copy created!\n";
}

AForm& AForm::operator=( AForm const &f ) {
	std::cout << "AForm Copy assigment called!\n";
	if ( this != &f )
		this->confirmed = f.confirmed;
	
	//this->name = b.name;
	return (*this);
}

AForm::~AForm( void ) {
	std::cout << "AForm destroyed!\n";
}

std::string	AForm::getName( void ) const{
	return (this->name);
}

bool	AForm::getConfirmed( void ) const{
	return (this->confirmed);
}

int	AForm::getRequiredGrade( void ) const{
	return (this->gradeRequired);
}

int	AForm::getExecuteGrade( void ) const{
	return (this->gradeExecute);
}

void	AForm::beSigned( Bureaucrat const &b ){
	if (b.getGrade() > this->gradeRequired)
		throw GradeTooLowException();
	else
	{
		this->confirmed = true;
		std::cout << "AForm " << name << " was signed by " << b.getName() << ".\n";
	}
}

const char *AForm::GradeTooHighException::what(void) const throw(){
	return ("Grade is too high, highest grade possible is 1.\n");
}

const char *AForm::GradeTooLowException::what(void) const throw(){
	return ("Grade is too low, lowest grade possible is 150.\n");
}

std::ostream &operator<<(std::ostream & os, AForm const &f){
	if (f.getConfirmed())
		os << f.getName() << ", AForm signed.\nGrade required to sign:\t" << f.getRequiredGrade() << "\nGrade required to execute:\t" << f.getExecuteGrade() << std::endl;
	else
		os << f.getName() << ", AForm not signed.\nGrade required to sign:\t" << f.getRequiredGrade() << "\nGrade required to execute:\t" << f.getExecuteGrade() << std::endl;

	return (os);
}
