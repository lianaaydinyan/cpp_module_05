#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 137, 145) , target("<target>")
{} 


ShrubberyCreationForm::ShrubberyCreationForm(const std::string& str) : AForm("ShrubberyCreationForm", 137, 145) , target(str)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& copy) : AForm(copy)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& copy)
{
    AForm::operator=(copy);
    return *this;
}

const char*  ShrubberyCreationForm::DoesItSign::what() const throw()
{
    return ("The Form isn't signed *_*");
}

const std::string&  ShrubberyCreationForm::getTarget() const
{
    return this->target;    
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::fstream file;
    if (!this->get_status() || (executor.get_grade() > this->get_grade_s()))
        throw DoesItSign();
    file.open(this->target + "_shrubbery");
    if (!file)
        throw std::runtime_error("Cant open file");
    file << "            ***              ";
    file << "         *********           ";
    file << "      ***************        ";
    file << "   *********************     ";
    file << " *************************   ";
    file << "***************************  ";
    file << "    *****************        ";
    file << "         ********            ";
    file << "            | |              ";
    file << "            | |              ";
    file << "            | |              ";
    file << "            | |              ";
    file << "            | |              ";
    file << "_____________________________";
    file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //destrcutor
}