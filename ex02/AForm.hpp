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

	protected:
		AForm( void );
		AForm( const std::string name );
		AForm( const std::string name, const int gradeR, const int gradeExe );
		AForm( const AForm &f );
		AForm& operator=( const AForm &f );
		virtual ~AForm( void );

	public:

	std::string	getName( void ) const;
	bool		getConfirmed( void ) const;
	int			getRequiredGrade( void ) const;
	int			getExecuteGrade( void ) const;
	void		beSigned( Bureaucrat const &b );
	virtual void		execute(Bureaucrat const & executor) const;

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

std::ostream &operator<<(std::ostream & os, AForm const &Aform);