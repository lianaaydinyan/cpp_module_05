#ifndef Presidential
#define Presidential


#include "Form.hpp"
class ShrubberyCreationForm : public Form
{
    public:
        // Ortodox
        ShrubberyCreationForm();
        ~ShrubberyCreationForm(); 
        ShrubberyCreationForm(ShrubberyCreationForm& copy);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm& copy);                  
};


#endif // Presidential