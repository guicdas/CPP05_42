#pragma once

#include <iostream>
#include "Form.hpp"
#include <fstream>
#include <stdlib.h>
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		int	const	sign;
		int	const	exec;
		std::string	target;
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string s );
		ShrubberyCreationForm( const ShrubberyCreationForm &S );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm &S );
		~ShrubberyCreationForm( void );
	
	virtual void	execute(Bureaucrat const & executor) const;
};