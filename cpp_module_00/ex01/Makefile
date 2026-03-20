name = PhoneBook
FLG = -Wall -Werror -Wextra -std=c++98 -g3
COMP = c++
SRC = PhoneBooK.cpp \
		Contact.cpp \
		main.cpp
HDRS = PhoneBook.hpp \
		Contact.hpp
OBJ = $(SRC:.cpp=.o)

all: $(name)

$(name): $(OBJ)
	@$(COMP) $(FLG) $(OBJ) -o $(name)

%.o: %.cpp $(HDRS)
	$(COMP) $(FLG) -c $< -o $@
    
clean:
	@rm -f $(OBJ)
fclean: clean
	@rm -f $(name)
re: fclean all
.PHONY: all clean fclean re