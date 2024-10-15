#pragma once

#include <iostream>
#include "AForm.hpp"
#include <stdlib.h>
#include "Bureaucrat.hpp"

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

	virtual void		execute(Bureaucrat const & executor) const;
};