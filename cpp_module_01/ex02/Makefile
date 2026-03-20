name = brain
FLG = -Werror -Wextra -Wall -std=c++98
COMP = c++
SRCS = main.cpp

OBJ = $(SRCS:.cpp=.o)

all: $(name)

%.o: %.cpp
	@$(COMP) $(FLG) -c $< -o $@

$(name): $(OBJ)
	$(COMP) $(FLG) $(OBJ) -o $(name)
clean:
	@rm -f $(OBJ)
fclean: clean 
	rm -rf $(name)
re: fclean all
.PHONY:all clean fclean re
