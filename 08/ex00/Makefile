NAME = a.out
CC = c++
CFLAGS = -Wall -Wextra -Werror
SRC = main.cpp
HDIR = headers
ODIR = objects
SDIR = sources
INCLUDES = -I../$(HDIR)

$(NAME): $(foreach file,$(SRC:.cpp=.o),$(ODIR)/$(file))
	$(CC) -o $@ $^
$(ODIR)/main.o: $(SDIR)/main.cpp $(HDIR)/*.hpp
	cd $(ODIR) && $(CC) $(INCLUDES) $(CFLAGS) -c ../$<
$(ODIR)/%.o: $(SDIR)/%.cpp $(HDIR)/%.hpp
	cd $(ODIR) && $(CC) $(INCLUDES) $(CFLAGS) -c ../$<

.PHONY: clean fclean re
clean:
	rm -f $(ODIR)/*.o
fclean: clean
	rm -f $(NAME)
re:
	make fclean
	make $(NAME)
