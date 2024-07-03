#include "Form.hpp"

Form::Form(const std::string name, const int grade_exec, const int grade_sign) : name_(name) , grade_exec_(grade_exec) , grade_sign_(grade_sign)
{
}

std::string Form::get_name( void ) const
{
	return this->name_;
}

int			Form::get_grade_s( void ) const
{
	return this->grade_sign_;
}
int			Form::get_grade_e( void ) const
{
	return this->grade_exec_;
}

bool		Form::get_status( void ) const
{
	return this->is_signed_;
}

std::ostream& operator<<(std::ostream& o, const Form obj)
{
	// o << obj.get_name() << ", Form grade " << obj.get_grade() << " .";
	return o;
}
