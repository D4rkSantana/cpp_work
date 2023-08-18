/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:21:25 by esilva-s          #+#    #+#             */
/*   Updated: 2023/07/10 14:29:00 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP



#include <iostream>
#include <exception>
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& temp);
        Bureaucrat& operator=(const Bureaucrat& temp);
        ~Bureaucrat();
        std::string getName(void) const;
        int         getGrade(void) const;
        void        incrementGrade(void);
        void        decrementGrade(void);

		void signForm(AForm &Aform);
        void executeForm(AForm const &form);

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

std::ostream&   operator<<( std::ostream &out, const Bureaucrat &ref);

#endif /*Bureaucrat_HPP*/