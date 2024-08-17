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

RobotomyRequestForm::RobotomyRequestForm& operator=(RobotomyRequestForm& copy)
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

}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{

    std::cout << "Brrrr... Rrrrr... Rrrrr..." << std::end;
    if (generateRandomBool())
        std::cout << "Robotomy " << this->get_name() <<  "has been robotomized >_< " << std::endl;
    else
        std::cout << "Robotomy " << this->get_name() <<  "failed ^_^ " << std::endl;

}