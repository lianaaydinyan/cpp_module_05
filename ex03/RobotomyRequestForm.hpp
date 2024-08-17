#ifndef Robotomy
#define Robotomy


#include "Form.hpp"
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
        void execute(Bureaucrat const & executor) const override;  
        RobotomyRequestForm(RobotomyRequestForm& copy);
        RobotomyRequestForm& operator=(RobotomyRequestForm& copy);
        ~RobotomyRequestForm();
};


bool generateRandomBool();

#endif // Robotomy