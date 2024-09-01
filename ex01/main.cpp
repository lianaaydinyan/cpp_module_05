#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

	Bureaucrat obj1("bb", 11);
	// try
	// {
	// 	Bureaucrat obj2("bb", 151);
	// }
	// catch (const std::exception& e)
	// {
	// 	std::cerr << "Bureaucrat::Error: " << e.what() << std::endl;
	// }
	// Bureaucrat obj3("cc", 150);
	// std::cout << "The grade is -> " << obj3.get_grade() << std::endl;
	// obj3.decrement_g();
	// std::cout << "The grade is -> " << obj3.get_grade() << std::endl;

    try
    {
        Form forma("Report", 99, 99);
		Form forma2(forma);
        obj1.signForm(forma2);
		std::cout << forma2 << std::endl;
    }
    catch(const std::exception& e)
    {
		std::cerr << "Form::Error: " << e.what() << std::endl;
        return 0;
    }
    

	return 0;
}
