#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		std::string const	name;
		int			const	gradeRequired;
		int			const	gradeExecute;
		bool				confirmed;

	public:
		Form( void );
		Form( std::string const );
		Form( std::string , int const , int const );
		Form( Form & );
		Form& operator=( const Form &f );
		virtual ~Form( void );

	std::string		getName( void ) const;
	bool			getConfirmed( void ) const;
	int				getRequiredGrade( void ) const;
	int				getExecuteGrade( void ) const;
	void			beSigned( Bureaucrat const & );
	virtual void	execute( Bureaucrat const & ) const;

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class BureaucratGradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream &operator<<( std::ostream & , Form const & );