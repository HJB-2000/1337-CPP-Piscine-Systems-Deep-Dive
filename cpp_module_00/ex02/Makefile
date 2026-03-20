NAME = job
FLG = -Wall -Werror -Wextra-std=c++98 -g3
COMP = c++
SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)
HDRS = Account.hpp

all: $(NAME)

$(NAME): $(OBJ)
	@$(COMP) $(FLG) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDRS)
	$(COMP) $(FLG) -c $< -o $@

clean:
	@rm -f Account.o tests.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re