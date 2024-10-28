#pragma once

#include <iostream>
#include <cstring>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
	public:
		Intern( void );
		Intern( Intern const & );
		Intern& operator=( Intern const & );
		~Intern( void );

	Form *makeForm( std::string , std::string ) const;

	class EmptyStringException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};