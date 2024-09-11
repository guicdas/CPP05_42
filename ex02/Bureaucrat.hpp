#pragma once

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat{
	private:
		const std::string	name;
		int					grade;

	public:
		Bureaucrat( void );
		Bureaucrat(std::string name, int grade);
		Bureaucrat( const Bureaucrat &b );
		Bureaucrat& operator=( const Bureaucrat &b );
		~Bureaucrat( void );

	std::string		getName( void ) const;
	int				getGrade( void ) const;
	void 			IncrementBureaucratGrade( void );
	void 			DecrementBureaucratGrade( void );
	void			signForm(Form &form);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream & os, Bureaucrat const &bureaucrat);
