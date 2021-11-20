NAME = a.out
CC = clang++
CFLAGS = -Wall -Wextra -Werror
SRC = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp

$(NAME): $(SRC:.cpp=.o)
	$(CC) -o $(NAME) $^
%.o: %.cpp %.hpp
	$(CC) $(CFLAGS) -c $<

.PHONY: clean fclean re
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re:
	make fclean
	make $(NAME)