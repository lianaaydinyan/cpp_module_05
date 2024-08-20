#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
int main()
{
    // {
    // Intern someRandomIntern;
    // AForm* rrf;
    // rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");  
    // }

    Bureaucrat chlp("document", 3);
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
