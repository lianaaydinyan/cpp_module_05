#ifndef Iternship
#define Iternship

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class AForm;

class Intern
{
    private:
        AForm* forms[3];
    public:
    class internship : public std::exception
    {
        public:
            const char* what() const throw();
    };
    AForm* makeForm(const std::string& form_name, const std::string& form_target);
    Intern(const Intern& obj);
    Intern& operator=(const Intern& obj);
    Intern();
    ~Intern();
};


#endif
