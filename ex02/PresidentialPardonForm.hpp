#pragma once

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		const int sign = 25;
		const int exec = 5;
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( const PresidentialPardonForm &P );
		PresidentialPardonForm& operator=( const PresidentialPardonForm &P );
		~PresidentialPardonForm( void );
};