name = Interface_recap
FLG = -Werror -Wextra -Wall -std=c++98 -g3
COMP = c++
SRCS = AMateria.cpp\
		ICharacter.cpp\
		IMateriaSource.cpp\
		main.cpp
HDR = AMateria.hpp \
		ICharacter.hpp\
		IMateriaSource.hpp

OBJ = $(SRCS:.cpp=.o)

all: $(name)

%.o: %.cpp $(HDR)
	@$(COMP) $(FLG) -c $< -o $@

$(name): $(OBJ)
	$(COMP) $(FLG) $(OBJ) -o $(name)
clean:
	@rm -f $(OBJ)
fclean: clean 
	rm -rf $(name)
re: fclean all
.PHONY:all clean fclean re%% 