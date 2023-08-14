

#ifndef AFORM_HPP
#define AFORM_HPP


#include <iostream>
#include <exception>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeExec;
		const int			_gradeSigned;

	public:
		AForm();
		AForm(const std::string name, int gradeExec, int gradeSigned);
		AForm(const	AForm& temp);
		AForm& operator=(const	AForm& temp);
		virtual ~AForm() = 0;

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

std::ostream&   operator<<( std::ostream &out, const AForm &ref);

#endif