name = megaphone
FLG = -Wall -Werror -Wextra -std=c++98
SRC = megaphone.cpp
COMP = c++

OBJ = $(SRC:.cpp=.o)

all: $(name)

%.o: %.cpp
	@$(COMP) $(FLG)  -c $< -o $@
clean:
	@rm -f $(OBJ)
fclean: clean 
	rm -rf $(name)
re: fclean all
.PHONY:all clean fclean re
	