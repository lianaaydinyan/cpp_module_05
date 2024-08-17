#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::() : AForm("PresidentialPardonForm", 5, 25) , target("<target>")
{}

PresidentialPardonForm::PresidentialPardonForm(const std::string& str) : AForm("PresidentialPardonForm", 5, 25) , target(str)
{}

const char*  PresidentialPardonForm::DoesItSign::what() const throw()
{
    return ("The Form isn't signed *_*");
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : AForm(obj)
{}

PresidentialPardonForm::PresidentialPardonForm& PresidentialPardonForm(const PresidentialPardonForm& obj)
{
    AForm::operator=(obj);
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    /// need to complete     
}

const std::string& PresidentialPardonForm::getTarget() const

PresidentialPardonForm::~PresidentialPardonForm()
{
    // destructor
}