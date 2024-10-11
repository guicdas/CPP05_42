#pragma once

#include <iostream>
#include "AForm.hpp"
#include <stdlib.h>

class RobotomyRequestForm : public AForm
{
	private:
		int	const	sign;
		int	const	exec;
		std::string	target;
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string s );
		RobotomyRequestForm( const RobotomyRequestForm &R );
		RobotomyRequestForm& operator=( const RobotomyRequestForm &R );
		~RobotomyRequestForm( void );

	void	ExecuteAction( void );
};