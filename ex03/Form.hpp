#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		std::string const	name;
		bool				confirmed;
		int const			gradeRequired;
		int const			gradeExecute;

	public:
		Form( void );
		Form( const std::string name );
		Form( const std::string name, const int gradeR, const int gradeExe );
		Form( const Form &f );
		Form& operator=( const Form &f );
		virtual ~Form( void );

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

std::ostream &operator<<(std::ostream & os, Form const &form);