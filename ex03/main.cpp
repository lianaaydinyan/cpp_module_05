#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    {
    Intern someRandomIntern;
    // rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");  
    // AForm* makeForm(const std::string& form_name, const std::string& form_target);
    AForm* rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
    std::cout << rrf->get_namee() << std::endl;
    }
    Bureaucrat chlp("document", 47);
    std::cout << chlp.get_name() << std::endl;
    ShrubberyCreationForm form1(chlp.get_name());
    chlp.signForm(form1);
    try
    {
        form1.execute(chlp);
    }
    catch(std::exception& exp)
    {
        std::cout << exp.what() << std::endl;
    }
    return 0;
}
