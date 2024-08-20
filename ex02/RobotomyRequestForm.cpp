#include "RobotomyRequestForm.hpp"


bool generateRandomBool()
{
    std::srand(std::time(NULL));
    int random_number = std::rand() % 100;
    return (random_number < 50);
}

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 45, 72) , target("<target>")
{}

RobotomyRequestForm::RobotomyRequestForm(const std::string& str) : AForm("RobotomyRequestForm", 45, 72) , target(str)
{}


RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& copy) : AForm(copy)
{}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& copy)
{
    AForm::operator=(copy);
    return *this;
}

const char*  RobotomyRequestForm::DoesItSign::what() const throw()
{
    return ("The Form isn't signed *_*");
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // destrcutor
}

const std::string& RobotomyRequestForm::getTarget() const
{
    return target;
}
 
void    RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    if (!this->get_status() || (executor.get_grade() > this->get_grade_s()))
        throw DoesItSign();
    std::cout << "Brrrr... Rrrrr... Rrrrr..." << std::endl;
    if (generateRandomBool())
        std::cout << "Robotomy " << this->getTarget() <<  "has been robotomized >_< " << std::endl;
    else
        std::cout << "Robotomy " << this->getTarget() <<  "failed ^_^ " << std::endl;

}