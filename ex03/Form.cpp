#include "Form.hpp"

Form::Form( void ) : name("Form"), confirmed(false), gradeRequired(150), gradeExecute(150){
	std::cout << "Form created by default!\n";
}

Form::Form( std::string const name ) : name(name), confirmed(false), gradeRequired(5), gradeExecute(5){
	std::cout << "Form " + name + " created.\n";
}

Form::Form( std::string const name, int const gradeR, int const gradeExe ) : name(name), confirmed(false), gradeRequired(gradeR), gradeExecute(gradeExe){
	if (gradeR < 1 || gradeExe < 1)
		throw( GradeTooHighException());
	if (gradeR > 150 || gradeExe > 150)
		throw (GradeTooLowException());
	std::cout << "Form " + name + " created with a " << gradeR << " required grade to sign, and a " << gradeExe << " to execute it.\n";
}

Form::Form( const Form &f ) : name(f.name), confirmed(false), gradeRequired(f.gradeRequired), gradeExecute(f.gradeExecute){
	std::cout << "Form Copy created!\n";
}

Form& Form::operator=( Form const &f ){
	std::cout << "Form Copy assigment called!\n";
	if ( this != &f )
		this->confirmed = f.confirmed;

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

void	Form::beSigned( Bureaucrat const &b ){
	if (b.getGrade() > this->gradeRequired)
		throw (BureaucratGradeTooLowException());
	this->confirmed = true;
}

void	Form::execute( Bureaucrat const &executor ) const{
	if (executor.getGrade() > this->gradeExecute)
		throw (BureaucratGradeTooLowException());
	std::cout << "Nothing happened." << std::endl;
}

const char *Form::GradeTooHighException::what( void ) const throw(){
	return ("Form Grade is too high, highest grade possible is 1.\n");
}

const char *Form::GradeTooLowException::what( void ) const throw(){
	return ("Form Grade is too low, lowest grade possible is 150.\n");
}

const char *Form::BureaucratGradeTooLowException::what( void ) const throw(){
	return ("Bureaucrat grade is too low to sign it.");
}

std::ostream &operator<<( std::ostream & os, Form const &f ){
	os << "Form " << f.getName();
	if (f.getConfirmed())
		os << ":\n\tSigned.";
	else
		os << ":\n\tNot signed.";
	os << "\n\tGrade required to sign:\t\t" << f.getRequiredGrade() << "\n\tGrade required to execute:\t" << f.getExecuteGrade() << std::endl;

	return (os);
}
