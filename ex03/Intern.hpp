#ifndef Iternship
#define Iternship

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class AForm;

class Intern
{
    private:
        
    public:
    AForm* makeForm(const std::string& form_name, const std::string& form_target);
    Intern();
    Intern(const Intern& obj);
    ~Intern();
};















#endif