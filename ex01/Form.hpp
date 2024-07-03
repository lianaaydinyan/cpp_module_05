#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	name_;
		bool				is_signed_;
		const int			grade_sign_;
		const int			grade_exec_;
	public:
		Form(const std::string name, const int grade_exec, const int grade_sign) ;
		void		beSigned(Bureaucrat obj) ;
		std::string get_name( void ) const;
		int			get_grade_s( void ) const;
		int			get_grade_e( void ) const;
		bool		get_status( void ) const;
};

std::ostream& operator<<(std::ostream o, const Form obj);


#endif