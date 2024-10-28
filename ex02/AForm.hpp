#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	private:
		std::string const	name;
		int			const	gradeRequired;
		int			const	gradeExecute;
		bool				confirmed;

	protected:
		AForm( void );
		AForm( std::string const );
		AForm( std::string const, int const , int const );
		AForm( AForm const & );
		AForm& operator=( AForm const & );
		virtual ~AForm( void );

	public:

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

std::ostream &operator<<( std::ostream & , AForm const & );