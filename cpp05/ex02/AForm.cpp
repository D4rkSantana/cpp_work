#include "AForm.hpp"

AForm::AForm() : _name("Frank"), _gradeExec(150), _gradeSigned(100)
{
    std::cout << "AForm was created" << std::endl;
	this->_signed = false;
}

AForm::AForm(const std::string name, int gradeExec, int gradeSigned) : _name(name), _gradeExec(gradeExec), _gradeSigned(gradeSigned)
{
	
    if (gradeExec < 1 || gradeSigned < 1)
        throw AForm::GradeTooHighException();
    if (gradeExec > 150 || gradeSigned > 150)
		throw AForm::GradeTooLowException();

	
    std::cout << "AForm was created" << std::endl;
	this->_signed = false;
}
//duvida: signed eh falso?
AForm::AForm(const AForm& temp) : _name(temp.getName()), _gradeExec(temp.getGradeExec()), _gradeSigned(temp.getGradeSigned())
{
	this->_signed = temp.getSigned();
    std::cout << "AForm was copied" << std::endl;
}

AForm::~AForm()
{
    std::cout << "AForm was destroyed" << std::endl;
}

//Duvida: tem que ter outros get? 
AForm &AForm::operator=(const AForm& temp)
{
    std::cout << "AForm has been assigned" << std::endl;
    this->_signed = temp.getSigned();
    return (*this);
}

std::string AForm::getName(void) const
{
    return (this->_name);
}

int       AForm::getGradeExec(void) const
{
    return (this->_gradeExec);
}

int   AForm::getGradeSigned(void) const
{
    return (this->_gradeSigned);
}

bool   AForm::getSigned(void) const
{
    return (this->_signed);
}


void AForm::beSigned(Bureaucrat &bureaucrat)
{
	
	if (bureaucrat.getGrade() <= this->getGradeSigned())
	{
		this->_signed = true;
	}
	else
		throw AForm::GradeTooLowException();

} 



const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Graduation too high, graduation must be between 1 and 150");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Graduation too low, graduation must be between 1 and 150");
}

std::ostream&   operator<<( std::ostream &out, const AForm &ref)
{
    out << ref.getName() << ", AForm grade to signed " << ref.getGradeSigned() <<  ", AForm grade to execute " << ref.getGradeExec() << ", AForm is  signed? " << ref.getSigned() <<"." ;

    return (out);
}