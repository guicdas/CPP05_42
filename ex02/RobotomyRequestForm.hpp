#pragma once

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		const int sign = 72;
		const int exec = 45;
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( const RobotomyRequestForm &R );
		RobotomyRequestForm& operator=( const RobotomyRequestForm &R );
		~RobotomyRequestForm( void );
};