#include "AForm.hpp"

AForm::AForm( void ) : name("AForm"), confirmed(false), gradeRequired(150), gradeExecute(150){
	std::cout << "AForm created by default!\n";
}

AForm::AForm( std::string const name ) : name(name), confirmed(false), gradeRequired(5), gradeExecute(5){
	std::cout << "AForm " + name + " created.\n";
}

AForm::AForm( std::string const name, int const gradeR, int const gradeExe ) : name(name), confirmed(false), gradeRequired(gradeR), gradeExecute(gradeExe){
	if (gradeR < 1 || gradeExe < 1)
		throw( GradeTooHighException());
	else if (gradeR > 150 || gradeExe > 150)
		throw (GradeTooLowException());
	std::cout << "AForm " + name + " created with a " << gradeR << " required grade to sign, and a " << gradeExe << " to execute it.\n";
}

AForm::AForm( AForm const &f ) : name(f.name), confirmed(false), gradeRequired(f.gradeRequired), gradeExecute(f.gradeExecute){
	std::cout << "AForm Copy created!\n";
}

AForm& AForm::operator=( AForm const &f ){
	std::cout << "AForm Copy assigment called!\n";
	if ( this != &f )
		this->confirmed = f.confirmed;

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
		throw (BureaucratGradeTooLowException());
	else
		this->confirmed = true;
}

void	AForm::execute( Bureaucrat const & executor ) const{
	if (executor.getGrade() > this->gradeExecute)
		throw (BureaucratGradeTooLowException());
	else
		std::cout << "Nothing happened." << std::endl;
}

const char *AForm::GradeTooHighException::what( void ) const throw(){
	return ("Form Grade is too high, highest grade possible is 1.\n");
}

const char *AForm::GradeTooLowException::what( void ) const throw(){
	return ("Form Grade is too low, lowest grade possible is 150.\n");
}

const char *AForm::BureaucratGradeTooLowException::what( void ) const throw(){
	return ("Bureaucrat grade is too low to sign it.");
}

std::ostream &operator<<( std::ostream & os, AForm const &f ){
	os << "Form " << f.getName();
	if (f.getConfirmed())
		os << ":\n\tSigned.";
	else
		os << ":\n\tNot signed.";
	os << "\n\tGrade required to sign:\t\t" << f.getRequiredGrade() << "\n\tGrade required to execute:\t" << f.getExecuteGrade() << std::endl;

	return (os);
}
