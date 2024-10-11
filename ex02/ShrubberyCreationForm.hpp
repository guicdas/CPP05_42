#pragma once

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
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
	
	void	ExecuteAction(void) const;
};