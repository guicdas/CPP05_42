#pragma once

#include <iostream>

class Bureaucrat{
	private:
		std::string	const	name;
		int					grade;

	public:
		Bureaucrat( void );
		Bureaucrat( std::string , int );
		Bureaucrat( Bureaucrat const & );
		Bureaucrat& operator=( Bureaucrat const & );
		~Bureaucrat( void );

	std::string		getName( void ) const;
	int				getGrade( void ) const;
	void 			IncrementBureaucratGrade( void );
	void 			DecrementBureaucratGrade( void );

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

std::ostream &operator<<( std::ostream & , Bureaucrat const & );
