#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
class Bureaucrat;
class AForm
{
	private:
		const std::string	name_;
		bool				is_signed_;
		const int			grade_sign_;
		const int			grade_exec_;
	public:
		AForm(); // done
		AForm& operator=(AForm &copy); // ?
		AForm(AForm& obj); // ?
		AForm(const std::string& name, const int grade_exec, const int grade_sign) ; // done 
		const std::string&	get_name( void ) const; // done
		const int&			get_grade_s( void ) const; // done 
		bool&				get_status( void ); // done 
		const int&			get_grade_e( void ) const; // done
		void				beSigned(Bureaucrat& obj) ; // ?
        virtual void execute(Bureaucrat const & executor) const = 0;
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw(); // done
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char* what() const throw(); // done
        };
		virtual ~AForm(); // done
};

std::ostream& operator<<(std::ostream& oo, AForm& obj);

#endif