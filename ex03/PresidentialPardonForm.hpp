#pragma once

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
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