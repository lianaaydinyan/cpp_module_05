#ifndef Robotomy
#define Robotomy

#include <cstdlib>
#include <ctime>
#include "Form.hpp"
class AForm;
class RobotomyRequestForm : public AForm
{
    private:
        const std::string target;
        RobotomyRequestForm();
    public:
        RobotomyRequestForm(const std::string& str);
        class DoesItSign : public std::exception
        {
			public:
				const char* what() const throw();
        };
        const std::string& getTarget() const;
        virtual void execute(Bureaucrat const & executor) const;  
        RobotomyRequestForm(RobotomyRequestForm& copy);
        RobotomyRequestForm& operator=(RobotomyRequestForm& copy);
        ~RobotomyRequestForm();
};


bool generateRandomBool();

#endif // Robotomy