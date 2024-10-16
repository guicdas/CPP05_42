CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 
RM				= rm -fr
INC				= Bureaucrat.hpp AForm.hpp RobotomyRequestForm.hpp \
					PresidentialPardonForm.hpp ShrubberyCreationForm.hpp Intern.hpp

NAME			= coffeeMaking

SOURCES			= main.cpp Bureaucrat.cpp AForm.cpp RobotomyRequestForm.cpp \
					PresidentialPardonForm.cpp ShrubberyCreationForm.cpp Intern.cpp

SOURCES_O		= $(SOURCES:.cpp=.o)

all:			$(NAME)

$(NAME):	$(SOURCES)
	@$(CXX) $(CXXFLAGS) $(SOURCES) -o $(NAME)

clean:
	@$(RM) $(SOURCES_O)

fclean:			clean
	@$(RM) $(NAME)

re:				fclean $(NAME)

x:
	clear
	@$(RM) $(SOURCES_O)
	@$(RM) $(NAME)
	@$(CXX) $(CXXFLAGS) $(SOURCES) -o $(NAME)
	@./$(NAME)

.PHONY:			all clean fclean re x