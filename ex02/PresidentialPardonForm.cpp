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
    if ((executor.get_grade() > this->get_grade_s()) || !this->is_signed_())
        throw DoesItSign();
     std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std:e:endl;
}

const std::string& PresidentialPardonForm::getTarget() const
{
    return this->target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    // destructor
}