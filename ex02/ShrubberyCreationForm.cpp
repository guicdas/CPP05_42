#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm("SCF", 145, 137), sign(145), exec(137){
	std::cout << "ShrubberyCreationForm created by default!\n";
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string s ) : AForm("SCF", 145, 137), sign(145), exec(137){
	this->target = s;
	std::cout << "ShrubberyCreationForm created with:\n\t" \
	<< "Sign Grade:\t\t"<< this->sign \
	<< "\n\tExecution Grade:\t" << this->exec \
	<< "\n\tTarget: \t\t" << this->target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &S ) : AForm(S), sign(145), exec(137){
	std::cout << "ShrubberyCreationForm Copy created!\n";
	*this = S;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm &S ){
	std::cout << "ShrubberyCreationForm Copy created!\n";
	if (this != &S)
		this->target = S.target;

	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){
	std::cout << "ShrubberyCreationForm destroyed!\n";
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	std::string		filename;
	int				i;
	std::srand(time(0));

	if (executor.getGrade() > this->exec)
		throw (BureaucratGradeTooLowException());
	i = rand() % 3 + 1;
	filename += target;
	filename += "_shrubbery";
	std::ofstream	file(filename.c_str());
	if (i == 1)
		file << "             _{\\ _{\\{\\/}/}/}__\n\
			{/{/\\}{/{/\\}(\\}{/\\} _\n\
			{/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n\
		{\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n\
		{/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n\
	_{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n\
	{/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n\
	_{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n\
	{/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n\
	{\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n\
	{/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n\
	{/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n\
	{/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n\
		{/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n\
		(_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n\
			{/{/{\\{\\/}{/{\\{\\{\\(_)/}\n\
			{/{\\{\\{\\/}/}{\\{\\\\}/}\n\
			{){/ {\\/}{\\/} \\}\\}\n\
			(_)  \\.-'.-/\n\
			...--- |'-.-'| --...__\n\
_...--   .-'    |'-.-'|  ' -.  --..__\n\
-       	       |. -._| '  . .  '  jro\n\
.  '-  '    .--'  | '-.'|    .  '  . \n\
		' ..     |'-_.-|\n\
.  '  .       _.-|-._ -|-._  .  '  .\n\
			.'   |'- .-|   .\n\
..-'   ' .  '.   `-._.-�   .'    - .\n\
.-' '        '-._______.-'       .";
	else if (i == 2)
		file << "       _-_\n\
/~~   ~~ \\	\n\
/~~         ~~\\ \n\
{               }\n\
\\  _-     -_  / \n\
~  \\ //  ~\n\
_- -   | | _- _\n\
_ -  | |   -_\n\
	// \\";
	else
		file << "                                              .         ;  \n\
				.              .              ;%     ;;   \n\
				,           ,                :;%  %;   \n\
				:         ;                   :;%;'     .,   \n\
		,.        %;     %;            ;        %;'    ,;\n\
			;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
			%;       %;%;      ,  ;       %;  ;%;   ,%;' \n\
			;%;      %;        ;%;        % ;%;  ,%;'\n\
			`%;.     ;%;     %;'         `;%%;.%;'\n\
				`:;%.    ;%%. %@;        %; ;@%;%'\n\
				`:%;.  :;bd%;          %;@%;'\n\
					`@%:.  :;%.         ;@@%;'   \n\
					`@%.  `;@%.      ;@@%;         \n\
						`@%%. `@%%    ;@@%;        \n\
						;@%. :@%%  %@@%;       \n\
							%@bd%%%bd%%:;     \n\
							#@%%%%%:;;\n\
							%@@%%%::;\n\
							%@@@%(o);  . '         \n\
							%@@@o%;:(.,'         \n\
						`.. %@@@o%::;         \n\
							`)@@@o%::;         \n\
							%@@(o)::;        \n\
							.%@@@@%::;         \n\
							;%@@@@%::;.          \n\
							;%@@@@%%:;;;. \n\
						...;%@@@@@%%:;;;;,..    Gilo97";
	file.close();
	std::cout << "Created file " << filename << " in the working dir" << std::endl;
}