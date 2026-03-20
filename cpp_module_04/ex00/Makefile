name = animal
FLG = -Werror -Wextra -Wall -std=c++98 -g3
COMP = c++
SRCS = Animal.cpp\
	   main.cpp \
	   WrongAnimal.cpp
	
HDR = Animal.hpp \
	  WrongAnimal.hpp

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
.PHONY:all clean fclean re%