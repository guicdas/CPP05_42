#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		std::string	const	name;
		int			const	gradeRequired;
		int 		const	gradeExecute;
		bool				confirmed;

	public:
		Form( void );
		Form( Form const & );
		Form( std::string const, int const, int const );
		Form& operator=( Form const & );
		~Form( void );

	std::string	getName( void ) const;
	bool		getConfirmed( void ) const;
	int			getRequiredGrade( void ) const;
	int			getExecuteGrade( void ) const;
	void		beSigned( Bureaucrat const & );

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