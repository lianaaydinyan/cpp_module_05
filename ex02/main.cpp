#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat chlp("My",3);
    std::cout << chlp.get_name() << std::endl;
    ShrubberyCreationForm formik(chlp.get_name());
    chlp.signForm(formik);
    try
    {
        formik.execute(chlp);
    }
    catch(std::exception& exp)
    {
        std::cout << exp.what() << std::endl;
    }
    return 0;
}
