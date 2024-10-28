#pragma once

#include <iostream>
#include "Form.hpp"
#include <stdlib.h>
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string	target;
		int	const	sign;
		int	const	exec;

	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string );
		RobotomyRequestForm( RobotomyRequestForm const & );
		RobotomyRequestForm& operator=( RobotomyRequestForm const & );
		~RobotomyRequestForm( void );

	virtual void		execute( Bureaucrat const & ) const;
};