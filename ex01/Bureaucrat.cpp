#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& o, const Bureaucrat obj)
{
	o << obj.get_name() << ", bureaucrat grade " << obj.get_grade() << " .";
	return o;
}

Bureaucrat::Bureaucrat(const std::string& name) : name_(name)
{
	this->grade_ = 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

Bureaucrat::Bureaucrat(const std::string& name, int grade ) : name_(name)
{

	if ( grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	grade_ = grade;
}

Bureaucrat::~Bureaucrat()
{
	// destructor
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : name_(obj.name_)
{
	this->grade_ = obj.grade_;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	if (this != &obj)
	{
		Bureaucrat tmp(obj);
		std::swap(grade_, tmp.grade_);
	}
	return *this;
}

const std::string	Bureaucrat::get_name() const
{
	return this->name_;
}

int			Bureaucrat::get_grade() const
{
	return grade_;
}

void			Bureaucrat::decrement_g()
{
	if (grade_ - 1 >= 1)
		grade_--;
	else
		throw Bureaucrat::GradeTooLowException();
}
void			Bureaucrat::increment_g()
{
	if (grade_ + 1 <= 150)
		grade_++;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::signForm(Form obj)
{
	if (obj.get_status())
		std::cout << get_name() << " signed " << obj.get_name() << std::endl;
	else
		std::cout << get_name() << " couldn't sign " << obj.get_name() << " becouse " << " ??   " << std::endl;
}
