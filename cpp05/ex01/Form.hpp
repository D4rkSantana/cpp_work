

#ifndef FORM_HPP
#define FORM_HPP


#include <iostream>
#include <exception>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	private:
		const std::string  _name;
		bool _signed;
		const int                 _gradeExec;
		const int                 _gradeSigned;

	public:
		Form();
		Form(const std::string name, int gradeExec, int gradeSigned);
		Form(const	Form& temp);
		Form& operator=(const	Form& temp);
		~Form();

		std::string getName(void) const;
		int getGradeExec(void) const;
		int getGradeSigned(void) const;
		bool getSigned(void) const;

		void beSigned(Bureaucrat &bureaucrat); 

        class GradeTooHighException : public std::exception
        {
            public:
               virtual  const char* what() const throw();
        };

        class GradeTooLowException :    public std::exception
        {
            public:
                virtual const char* what() const throw();
        };



};

std::ostream&   operator<<( std::ostream &out, const Form &ref);

#endif