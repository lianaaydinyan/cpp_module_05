#include "Intern.hpp"


Intern::Intern() {}

const char* Intern::internship::what() const throw()
{
    return "\nWe support 3 forms \n1.ShrubberyCreationForm\n2.RobotomyRequestForm\n3.PresidentialPardonForm\n";
}

AForm* Intern::makeForm(const std::string& form_name, const std::string& form_target)
{
    // create 
    // find
    forms[0] = new ShrubberyCreationForm(form_target);
    forms[1] = new RobotomyRequestForm(form_target);
    forms[2] = new PresidentialPardonForm(form_target);
    int i = 0;
    while (i < 3)
    {
        if (forms[i]->get_namee() == form_name)
            return forms[i];
        i++;
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
    if (this != &obj)
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
   while (i < 3)
    {
        delete forms[i];
        i++;
    }
}