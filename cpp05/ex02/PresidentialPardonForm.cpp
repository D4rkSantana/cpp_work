#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 72, 45)
{
    this->_target = "default";
    std::cout << "Shrubbery Creation Form Default was created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 72, 45)
{
    this->_target = target;
    std::cout << "Shrubbery Creation Form was created" << std::endl;    
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : AForm("PresidentialPardonForm", 72, 45)
{
    this->_target = src.getTarget();
    std::cout << "PresidentialPardonForm was copied" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm was destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this != &rhs)
    {
        std::cout << "PresidentialPardonForm has been assigned" << std::endl;
        this->_target = rhs.getTarget();
    }
	return *this;
}

std::ostream &operator<<(std::ostream & o, PresidentialPardonForm const & ref)
{
	o << ref.getName() << ", target is " << ref.getTarget() << ", grade to signed " << ref.getGradeSigned() <<  ", grade to execute " << ref.getGradeExec() << ", is  signed? " << ref.getSigned() <<"." ;
	return o;
}


void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    this->checkExecute(executor);
	std::cout << "Drilling noises..." << std::endl;
	if(rand() % 2)
		std::cout <<  this->getTarget() <<" has been robotomized successfully " << std::endl;
	else 
		std::cout <<  this->getTarget() <<" fail to be robotized" << std::endl;
                                  
}


/*
** --------------------------------- METHODS ----------------------------------



*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string PresidentialPardonForm::getTarget(void) const
{
    return (this->_target);
}

/* ************************************************************************** */