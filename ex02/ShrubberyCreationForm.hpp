#pragma once

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		const int sign = 145;
		const int exec = 137;
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const ShrubberyCreationForm &S );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm &S );
		~ShrubberyCreationForm( void );

};