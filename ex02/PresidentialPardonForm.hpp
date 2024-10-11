#pragma once

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		int	const	sign = 25;
		int	const	exec = 5;
		std::string	target;
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string s );
		PresidentialPardonForm( const PresidentialPardonForm &P );
		PresidentialPardonForm& operator=( const PresidentialPardonForm &P );
		~PresidentialPardonForm( void );
};