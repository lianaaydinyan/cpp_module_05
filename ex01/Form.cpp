#include "Form.hpp"

		// const std::string	name_;
		// bool				is_signed_;
		// const int			grade_sign_;
		// const int			grade_exec_;

		// const std::string&	get_name( void ) const;
		// const int&			get_grade_s( void ) const;
		// const int&			get_grade_e( void ) const;
		// bool&				get_status( void ) const;



void				Form::beSigned(Bureaucrat& obj)  // ?
{
	if (obj.get_name() && ( obj.get_grade >= 1 && obj.get_grade <= 150 ))
		this->is_signed_ = true;
	else if (obj.get_name() && !( obj.get_grade >= 1 && obj.get_grade <= 150 ))
	{
		if (!(obj.get_grade >= 1))
			throw Bureaucrat::GradeTooHighException();
		else if (!(obj.get_grade <= 150)) 
			throw Bureaucrat::GradeTooLowException();
	}
}

const char* Form::GradeTooHighException::what() const throw()
{
		return "Grade is too higth";
}
const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
} 

Form::Form() : name_("default") , is_signed_(false) , grade_sign_(150), grade_exec_(150)
{
	std::cout << "Default Form constructor called " << std::endl;
}

Form::Form(const std::string name,const int grade_exec, const int grade_sign) : name_(name) , grade_exec_(grade_exec) , grade_sign_(grade_sign)
{
	std::cout << "Parametrized Form constructor called " << std::endl;
	this->is_signed_ = false;
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

bool& Form::get_status() const
{
	return this->is_signed_;
}


std::ostream& operator<<(std::ostream o, Form& obj);
{
	o << obj.get_name() << " Form have " << obj.get_status() << " state ^_^ " << std::endl;
}

