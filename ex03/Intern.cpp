#include "Intern.hpp"


Intern::Intern() : form_count(3) {}

const char* Intern::internship::what() const throw()
{
    return "We support 3 forms \n 1.ShrubberyCreationForm \n2.RobotomyRequestForm\n 3.PresidentialPardonForm\n ";
}

AForm* Intern::makeForm(const std::string& form_name, const std::string& form_target)
{
    // create 
    // find
    froms[0] = new ShrubberyCreationForm(form_target);
    forms[1] = new RobotomyRequestForm(form_target);
    forms[2] = new PresidentialPardonForm(form_target);
    int i = 0;
    while (i < this->form_count)
    {
        if (forms[i].get_name() == form_name)
            return forms[i];
    }
    throw internship();
}

Intern::Intern(const Intern& obj)
{
    this->forms[0] = obj.forms[0];
    this->forms[1] = obj.forms[1];
    this->forms[2] = obj.forms[2];
}

Intern& Intern::operator=(const Intern& obj)
{
    if (*this != obj)
    {
        this->forms[0] = obj.forms[0];
        this->forms[1] = obj.forms[1];
        this->forms[2] = obj.forms[2]; 
    }
    return *this;
}

Intern::~Intern()
{
   int i = 0;
   while (i < this->form_count)
    {
        delete forms[i];
        i++;
    }
}