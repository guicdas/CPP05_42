#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : name("Bureaucrat"), grade(150){
	std::cout << "Bureaucrat created by default!\n";
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : name(name){
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat " + name + " created with " << grade << " grade!\n";
	this->grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const &b ){
	std::cout << "Bureaucrat Copy created!\n";
	*this = b;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const &b ) {
	std::cout << "Bureaucrat Copy assigment called!\n";
	if ( this != &b )
		this->grade = b.grade;
	
	return (*this);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat destroyed!\n";
}


std::string	Bureaucrat::getName( void ) const{
	return (this->name);
}

int	Bureaucrat::getGrade( void ) const{
	return (this->grade);
}

void Bureaucrat::IncrementBureaucratGrade( void ){
	if (this->grade == 1)
		throw (GradeTooHighException());
	else
	{
		this->grade--;
		std::cout << "INCREMENT: " << this->name << "'s grade is now " << this->grade << std::endl;
	}
}

void Bureaucrat::DecrementBureaucratGrade( void ){
	if (this->grade == 150)
		throw (GradeTooLowException());
	else
	{
		this->grade++;
		std::cout << "DECREMENT: " << this->name << "'s grade is now " << this->grade << std::endl;
	}
}

void	Bureaucrat::signForm( Form &form )
{
	try
	{
		form.beSigned(*this);
		std::cout << "Form " << form.getName() << " was signed by " << this->name << "\n";
	}
	catch(std::exception& e)
	{
		std::cout << this->name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm( Form const &form )
{
	try
	{
		std::cout << this->name << " tried executing " << form.getName() << std::endl;
		form.execute(*this);
	}
	catch(std::exception& e)
	{
		std::cout << this->name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what( void ) const throw(){
	return ("Bureaucrat Grade is too high, highest grade possible is 1.\n");
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw(){
	return ("Bureaucrat Grade is too low, lowest grade possible is 150.\n");
}

std::ostream &operator<<( std::ostream & os, Bureaucrat const &b ){
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (os);
}