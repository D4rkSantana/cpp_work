#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
        ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm();

        std::string getTarget(void) const;
        void execute(Bureaucrat const &executor) const;

		ShrubberyCreationForm &operator=(ShrubberyCreationForm const & rhs);

	private:
        std::string _target;

};

std::ostream &operator<<(std::ostream & o, ShrubberyCreationForm const & ref);

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */