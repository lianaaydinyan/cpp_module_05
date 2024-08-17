#ifndef Robotomy
#define Robotomy


#include "Form.hpp"
class RobotomyRequestForm : public Form
{
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm& copy);
        RobotomyRequestForm& operator=(RobotomyRequestForm& copy);
};

#endif // Robotomy