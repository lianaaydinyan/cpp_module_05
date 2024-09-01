#include "Form.hpp"
#include "Bureaucrat.hpp"

Form& Form::operator=(const Form &copy) 
{
	this->is_signed_ = copy.is_signed_;
	return *this;
}

Form::Form(const Form& obj) : name_(obj.name_), is_signed_(obj.is_signed_), grade_sign_(obj.grade_sign_), grade_exec_(obj.grade_exec_)
{
	std::cout << "Copy constructor called" << std::endl;

}

void				Form::beSigned(Bureaucrat& obj)  // ?
{
	if (obj.get_grade() <= this->grade_sign_)
	{
		this->is_signed_ = true;
		std::cout << obj.get_name() << " signed ~ " << std::endl;
	}
	else
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
		return "Grade is too higth";
}
const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
} 

Form::Form() : name_("default") , is_signed_(false) , grade_sign_(77), grade_exec_(77)
{
	std::cout << "Default Form constructor called " << std::endl;
}

Form::Form(const std::string name,const int grade_exec, const int grade_sign) : name_(name) , is_signed_(false), grade_sign_(grade_sign) ,grade_exec_(grade_exec)
{
	// checking
	if (grade_exec < 1 )
		throw Form::GradeTooHighException();
	else if (grade_exec > 150 )
		throw Form::GradeTooLowException();
	if (grade_sign < 1)
		throw Form::GradeTooHighException();
	else if ( grade_sign > 150)
		throw Form::GradeTooHighException();
	std::cout << "Parametrized Form constructor called " << std::endl;
}


Form::~Form()
{
	// std::cout << "Default destructor." << std::endl;
}


const std::string& Form::get_name() const 
{
	return this->name_;
}

const int& Form::get_grade_e() const 
{
	return this->grade_exec_;
}

const int& Form::get_grade_s() const 
{
	return this->grade_sign_;
}

bool Form::get_status() const 
{
	return is_signed_;
}

std::ostream& operator<<(std::ostream& oo,const Form& obj)
{
	oo << obj.get_name() << " Form have " << obj.get_status() << " state ^_^ " << std::endl;
	oo << obj.get_grade_e() << " grade to execute, " << obj.get_grade_s() << " grade to sing ." << std::endl; 
	return oo;
}

