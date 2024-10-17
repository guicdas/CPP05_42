#pragma once

#include <iostream>
#include <cstring>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
	private:

	public:
		Intern( void );
		Intern( const Intern &I );
		Intern& operator=( const Intern &I );
		~Intern( void );

	Form *makeForm( std::string s1, std::string s2 ) const;

	class EmptyStringException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};