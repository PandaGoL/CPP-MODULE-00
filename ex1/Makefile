NAME = PhoneBook

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Contact_Class.cpp   PhoneBook_Class.cpp

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
			g++ $(FLAGS) -o $(NAME) $(OBJS)

.cpp.o:
			g++ $(FLAGS) -c $< -o $@

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)
re:		fclean all



.PHONY: all clean fclean re