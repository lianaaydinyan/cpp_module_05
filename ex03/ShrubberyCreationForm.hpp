#ifndef ShrubberyCreationForm_
#define ShrubberyCreationForm_


#include <fstream>
#include <stdexcept>
#include "Form.hpp"
class AForm;
class ShrubberyCreationForm : public AForm
{
    private:
        const std::string target;
        ShrubberyCreationForm();
    public:
        ShrubberyCreationForm(const std::string& str);
        class DoesItSign : public std::exception
        {
			public:
				const char* what() const throw();
        };
        const std::string& getTarget() const;
        virtual void execute(Bureaucrat const & executor) const;
        ShrubberyCreationForm(ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm& copy);                  
        ~ShrubberyCreationForm(); 
};


#endif // ShrubberyCreationForm_

