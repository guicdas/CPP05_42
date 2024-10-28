#pragma once

#include <iostream>
#include "AForm.hpp"
#include <fstream>
#include <stdlib.h>
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		int	const	sign;
		int	const	exec;
		std::string	target;
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string );
		ShrubberyCreationForm( ShrubberyCreationForm const & );
		ShrubberyCreationForm& operator=( ShrubberyCreationForm const & );
		~ShrubberyCreationForm( void );
	
	virtual void	execute( Bureaucrat const & ) const;
};