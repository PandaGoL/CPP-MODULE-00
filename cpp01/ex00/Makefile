NAME = Zombie

FLAGS = -Wall -Werror -Wextra -std=c++98

SRCS = main.cpp Zombie.cpp newZombie.cpp randomZombie.cpp

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
			c++ $(FLAGS) -o $(NAME) $(OBJS)

.cpp.o:
			c++ $(FLAGS) -c $< -o $@

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)
re:		fclean all



.PHONY: all clean fclean re