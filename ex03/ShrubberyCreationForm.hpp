#ifndef ShrubberyCreationForm_
#define ShrubberyCreationForm_

#include <fstream>
#include <stdexcept>
#include "Form.hpp"
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
        void execute(Bureaucrat const & executor) const override;
        ShrubberyCreationForm(ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm& copy);                  
        ~ShrubberyCreationForm(); 
};


#endif // ShrubberyCreationForm_

