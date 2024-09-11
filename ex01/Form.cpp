#include "Form.hpp"

Form::Form( void ) : name("Form"), confirmed(false), gradeRequired(150), gradeExecute(150){
	std::cout << "Form created by default!\n";
}

Form::Form( const std::string name, const int gradeR, const int gradeExe ) : name(name), confirmed(false), gradeRequired(gradeR), gradeExecute(gradeExe){
	std::cout << "Form " + name + " created with a " << gradeR << " required grade to sign, and a " << gradeExe << " to execute it!\n";
	if (gradeRequired < 1 || gradeExecute < 1)
		throw GradeTooHighException();
	else if (gradeRequired < 150 || gradeExecute < 150)
		throw GradeTooLowException();
}

Form::Form( const Form &f ) : name(f.name), confirmed(false), gradeRequired(f.gradeRequired), gradeExecute(f.gradeExecute){
	std::cout << "Form Copy created!\n";
}

Form& Form::operator=( const Form &f ) {
	std::cout << "Form Copy assigment called!\n";
	if ( this != &f )
		this->confirmed = f.confirmed;
	
	//this->name = b.name;
	return (*this);
}

Form::~Form( void ) {
	std::cout << "Form destroyed!\n";
}

std::string	Form::getName( void ) const{
	return (this->name);
}

bool	Form::getConfirmed( void ) const{
	return (this->confirmed);
}

int	Form::getRequiredGrade( void ) const{
	return (this->gradeRequired);
}

int	Form::getExecuteGrade( void ) const{
	return (this->gradeExecute);
}

const char *Form::GradeTooHighException::what(void) const throw(){
	return ("Grade is too high, highest grade possible is 1.\n");
}

const char *Form::GradeTooLowException::what(void) const throw(){
	return ("Grade is too low, lowest grade possible is 150.\n");
}

std::ostream &operator<<(std::ostream & os, Form const &f){
	if (f.getConfirmed())
		os << f.getName() << ", Form signed.\nGrade required to sign:\t" << f.getRequiredGrade() << "\nGrade required to execute:\t" << f.getExecuteGrade() << std::endl;
	else
		os << f.getName() << ", Form not signed.\nGrade required to sign:\t" << f.getRequiredGrade() << "\nGrade required to execute:\t" << f.getExecuteGrade() << std::endl;

	return (os);
}
