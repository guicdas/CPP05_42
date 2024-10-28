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
		PresidentialPardonForm( std::string );
		PresidentialPardonForm( PresidentialPardonForm const & );
		PresidentialPardonForm& operator=( PresidentialPardonForm const & );
		~PresidentialPardonForm( void );

	virtual void		execute( Bureaucrat const & ) const;
};