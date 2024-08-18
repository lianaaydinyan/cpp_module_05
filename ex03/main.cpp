#include "Intern.hpp"

int main(void)
{
	try
	{
		Intern intern1;
		AForm *my_form;

		my_form = intern1.makeForm("RobotomyRequestForm", "chlp");
		std::cout << my_form->getTarget() << std::endl;

		std::cout << *my_form << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}