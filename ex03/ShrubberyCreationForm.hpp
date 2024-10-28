#pragma once

#include <iostream>
#include "Form.hpp"
#include <fstream>
#include <stdlib.h>
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	target;
		int	const	sign;
		int	const	exec;

	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string );
		ShrubberyCreationForm( ShrubberyCreationForm const & );
		ShrubberyCreationForm& operator=( ShrubberyCreationForm const & );
		~ShrubberyCreationForm( void );
	
	virtual void	execute( Bureaucrat const & ) const;
};