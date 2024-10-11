#pragma once

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		int	const	sign = 145;
		int	const	exec = 137;
		std::string	target;
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string s );
		ShrubberyCreationForm( const ShrubberyCreationForm &S );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm &S );
		~ShrubberyCreationForm( void );

};