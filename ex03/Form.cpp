#include "Form.hpp"
#include "Bureaucrat.hpp"

AForm& AForm::operator=(AForm &copy) // ?
{
	this->is_signed_ = copy.is_signed_;
	return *this;
}

AForm::AForm(AForm& obj) : name_(obj.name_), is_signed_(obj.is_signed_), grade_exec_(obj.grade_exec_) , grade_sign_(obj.grade_sign_)
{
}

void				AForm::beSigned(Bureaucrat& obj)  // ?
{
	if (obj.get_grade() <= this->grade_sign_)
	{
		this->is_signed_ = true;
		std::cout << obj.get_name() << " signed ~ " << std::endl;
	}
	else
		throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
		return "Grade is too higth";
}
const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
} 

AForm::AForm() : name_("default") , is_signed_(false) , grade_sign_(77), grade_exec_(77)
{
	std::cout << "Default AForm constructor called " << std::endl;
}

AForm::AForm(const std::string name, const int grade_exec, const int grade_sign) : name_(name) , is_signed_(false) ,grade_exec_(grade_exec) , grade_sign_(grade_sign)
{
	// checking
	if (grade_exec < 1 )
		throw AForm::GradeTooHighException();
	else if (grade_exec > 150 )
		throw AForm::GradeTooLowException();
	if (grade_sign < 1)
		throw AForm::GradeTooHighException();
	else if ( grade_sign > 150)
		throw AForm::GradeTooHighException();
	std::cout << "Parametrized AForm constructor called " << std::endl;
}


AForm::~AForm()
{
	// std::cout << "Default destructor." << std::endl;
}


const std::string& AForm::get_name() const 
{
	return this->name_;
}

const int& AForm::get_grade_e() const 
{
	return this->grade_exec_;
}

const int& AForm::get_grade_s() const 
{
	return this->grade_sign_;
}

bool& AForm::get_status() 
{
	return is_signed_;
}

void AForm::execute(Bureaucrat const & executor) const 
{
    
}

std::ostream& operator<<(std::ostream& oo, AForm& obj)
{
	oo << obj.get_name() << " Form have " << obj.get_status() << " state ^_^ " << std::endl;
	oo << obj.get_grade_e() << " grade to execute, " << obj.get_grade_s() << " grade to sing ." << std::endl; 
	return oo;
}

