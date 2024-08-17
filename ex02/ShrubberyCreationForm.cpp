#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 137, 145) , target("<target>")
{} 


ShrubberyCreationForm::ShrubberyCreationForm(const std::string& str) : AForm("ShrubberyCreationForm", 137, 145) , target(str)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& copy) : AForm(copy)
{}

ShrubberyCreationForm::ShrubberyCreationForm& operator=(ShrubberyCreationForm& copy)
{
    AForm::operator=(copy);
    return *this;
}

const char*  ShrubberyCreationForm::DoesItSign::what() const throw()
{
    return ("The Form isn't signed *_*");
}

const std::string&  ShrubberyCreationForm::getTarget() const{
    
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //destrcutor
}