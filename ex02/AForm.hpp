#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	private:
		std::string const	name;
		bool				confirmed;
		int const			gradeRequired;
		int const			gradeExecute;

	public:
		AForm( void );
		AForm( const AForm &f );
		AForm( const std::string name, const int gradeR, const int gradeExe );
		AForm& operator=( const AForm &f );
		virtual ~AForm( void );

	std::string	getName( void ) const;
	bool		getConfirmed( void ) const;
	int			getRequiredGrade( void ) const;
	int			getExecuteGrade( void ) const;
	void		beSigned( Bureaucrat const &b );

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
};

std::ostream &operator<<(std::ostream & os, AForm const &Aform);