#pragma once

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string	target;
		int	const	sign;
		int	const	exec;
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string );
		PresidentialPardonForm( PresidentialPardonForm const & );
		PresidentialPardonForm& operator=( PresidentialPardonForm const & );
		~PresidentialPardonForm( void );

	virtual void		execute( Bureaucrat const & ) const;
};