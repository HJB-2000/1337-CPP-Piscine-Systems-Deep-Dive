name = fixed_point
FLG = -Werror -Wextra -Wall -std=c++98
COMP = c++
SRCS = main.cpp \
		Fixed.cpp
HDR = Fixed.hpp

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
.PHONY:all clean fclean re
