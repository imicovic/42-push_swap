CC		= cc
CFLAGS	= -Wall -Wextra -Werror
LIB		= push_swap.a
LIBDIR	= lib/
DIR		= srcs/
SRC		= $(DIR)init.c\
		  $(DIR)init_nodes_a.c\
		  $(DIR)init_nodes_b.c\
		  $(DIR)sort.c\
		  $(DIR)sort_to_b.c\
		  $(DIR)tinysort.c\
		  $(DIR)utils.c\
		  $(DIR)main.c
OBJ		= $(SRC:.c=.o)
NAME	= push_swap

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(addprefix $(LIBDIR), $(LIB))

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make clean -C lib
	rm -f $(OBJ) $(addprefix $(LIBDIR), $(LIB))

fclean: clean
	make fclean -C lib
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
