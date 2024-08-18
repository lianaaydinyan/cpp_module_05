
#ifndef PresidentialPardonForm_
#define PresidentialPardonForm_

#include "Form.hpp"
class PresidentialPardonForm : public AForm
{
    private:
        const std::string target;
        PresidentialPardonForm();
    public:
        PresidentialPardonForm(const std::string& str);
        class DoesItSign : public std::exception
        {
			public:
				const char* what() const throw();
        };
        const std::string& getTarget() const;
        void execute(Bureaucrat const & executor) const override;
        PresidentialPardonForm(const PresidentialPardonForm& obj);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
        ~PresidentialPardonForm();
};

#endif // PresidentialPardonForm_

