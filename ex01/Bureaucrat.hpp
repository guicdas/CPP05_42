#pragma once

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat{
	private:
		std::string	const	name;
		int					grade;

	public:
		Bureaucrat( void );
		Bureaucrat( std::string , int );
		Bureaucrat( Bureaucrat const & );
		Bureaucrat& operator=( Bureaucrat const & );
		~Bureaucrat( void );

	std::string		getName( void ) const;
	int				getGrade( void ) const;
	void 			IncrementBureaucratGrade( void );
	void 			DecrementBureaucratGrade( void );
	void			signForm( Form & );

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

std::ostream &operator<<( std::ostream & , Bureaucrat const & );
