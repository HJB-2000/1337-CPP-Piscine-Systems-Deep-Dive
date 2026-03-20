name = BSP
FLG = -Werror -Wextra -Wall -std=c++98
COMP = c++
SRCS = bsp.cpp \
		Fixed.cpp \
		main.cpp \
		Point.cpp \

HDR = Point.hpp \
	Fixed.hpp \

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