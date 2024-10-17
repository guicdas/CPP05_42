#pragma once

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	private:
		int	const	sign;
		int	const	exec;
		std::string	target;
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string s );
		PresidentialPardonForm( const PresidentialPardonForm &P );
		PresidentialPardonForm& operator=( const PresidentialPardonForm &P );
		~PresidentialPardonForm( void );

	virtual void		execute(Bureaucrat const & executor) const;
};