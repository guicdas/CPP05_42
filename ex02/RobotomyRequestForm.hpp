#pragma once

#include <iostream>
#include "AForm.hpp"
#include <ctime>

class RobotomyRequestForm : public AForm
{
	private:
		int	const	sign = 72;
		int	const	exec = 45;
		std::string	target;
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string s );
		RobotomyRequestForm( const RobotomyRequestForm &R );
		RobotomyRequestForm& operator=( const RobotomyRequestForm &R );
		~RobotomyRequestForm( void );
};