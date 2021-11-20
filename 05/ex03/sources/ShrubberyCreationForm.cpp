#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string s):
Form("ShrubberyCreationForm", ShrubberyCreationForm::gradeRequiredToSign,
ShrubberyCreationForm::gradeRequiredToExecute), target(s)
{ }

ShrubberyCreationForm::~ShrubberyCreationForm() { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a):
Form("ShrubberyCreationForm", ShrubberyCreationForm::gradeRequiredToSign,
ShrubberyCreationForm::gradeRequiredToExecute), target(a.getName())
{ }

void	ShrubberyCreationForm::execute(const Bureaucrat &a) const
{
	if (getIsSigned() == false)
		throw FormNotSigned();
	if (a.getGrade() > gradeRequiredToExecute)
		throw Bureaucrat::GradeTooLowException();
	std::string			inFileName("./trees/" + std::to_string(getRand(1, 10)));
	std::ifstream		ifs(inFileName, std::ifstream::in);
	if (!ifs)
		throw std::runtime_error("Could not open file for reading: " + inFileName);
	std::ofstream	ofs(target + "_shrubbery", std::ofstream::out);
	if (!ofs)
		throw std::runtime_error("Could not create file for writing: " + target + "_shrubbery");
	while (ifs)
	{
		std::string	cur_line;
		std::getline(ifs, cur_line);
		ofs << cur_line << std::endl;
	}
	ifs.close();
	ofs.close();
	std::cout << "Successfully made the file: " << target + "_shrubbery" << std::endl;;
}
