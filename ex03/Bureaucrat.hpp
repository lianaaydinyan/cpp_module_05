#ifndef Bureaucrat_hpp
#define Bureaucrat_hpp

#include <utility>
#include <iostream>
class AForm;

class Bureaucrat
{
	private:
		const std::string	name_;
		int 				grade_;
	public:
		// e OrthodoxCanonical Form
		Bureaucrat(const std::string& name);
		Bureaucrat(const std::string& name , int grade);
		~Bureaucrat();
		class GradeTooHighException : public std::exception
		{ 
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{ 
			public:
				const char* what() const throw();
		};
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& obj);
		const std::string	get_name() const;
		int					get_grade() const;
		void				decrement_g(); // ++grade_
		void				increment_g(); // --grade_
		// for Form
		void	signForm(AForm& obj);
		// for execute
		void executeForm(AForm const & form);

};

std::ostream& operator<<(std::ostream& o, const Bureaucrat obj);
#endif // Bureaucrat_hpp
