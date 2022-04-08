NAME	= convert

SRC		= main.cpp Conversion.cpp
INC		= Conversion.hpp
OBJ		= $(SRC:.cpp=.o)

CC		= c++

FLAGS	= -Wall -Werror -Wextra -std=c++98

RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJ) Makefile $(INC)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ): %.o: %.cpp
	$(CC) $(FLAGS)  -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
