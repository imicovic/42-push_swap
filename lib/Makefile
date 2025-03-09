TARGET	= push_swap.a
DIRFT	= ./libft
SRCFT	= $(DIRFT)/ft_isalpha.c\
		  $(DIRFT)/ft_isdigit.c\
		  $(DIRFT)/ft_isalnum.c\
		  $(DIRFT)/ft_isascii.c\
		  $(DIRFT)/ft_isprint.c\
		  $(DIRFT)/ft_strlen.c\
		  $(DIRFT)/ft_strlcpy.c\
		  $(DIRFT)/ft_strlcat.c\
		  $(DIRFT)/ft_atoi.c\
		  $(DIRFT)/ft_bzero.c\
		  $(DIRFT)/ft_memset.c\
		  $(DIRFT)/ft_memcpy.c\
		  $(DIRFT)/ft_memmove.c\
		  $(DIRFT)/ft_toupper.c\
		  $(DIRFT)/ft_tolower.c\
		  $(DIRFT)/ft_strchr.c\
		  $(DIRFT)/ft_strrchr.c\
		  $(DIRFT)/ft_strncmp.c\
		  $(DIRFT)/ft_memchr.c\
		  $(DIRFT)/ft_memcmp.c\
		  $(DIRFT)/ft_strnstr.c\
		  $(DIRFT)/ft_calloc.c\
		  $(DIRFT)/ft_strdup.c\
		  $(DIRFT)/ft_substr.c\
		  $(DIRFT)/ft_strjoin.c\
		  $(DIRFT)/ft_strtrim.c\
		  $(DIRFT)/ft_itoa.c\
		  $(DIRFT)/ft_strmapi.c\
		  $(DIRFT)/ft_striteri.c\
		  $(DIRFT)/ft_putchar_fd.c\
		  $(DIRFT)/ft_putstr_fd.c\
		  $(DIRFT)/ft_putendl_fd.c\
		  $(DIRFT)/ft_split.c\
		  $(DIRFT)/ft_putnbr_fd.c\
		  $(DIRFT)/ft_atol.c\
		  $(DIRFT)/tabfree.c\
		  $(DIRFT)/lstnew.c\
		  $(DIRFT)/lstaddback.c\
		  $(DIRFT)/lstaddfront.c\
		  $(DIRFT)/printlist.c\
		  $(DIRFT)/lstclear.c\
		  $(DIRFT)/lstlast.c\
		  $(DIRFT)/lstsize.c
OBJFT	= $(SRCFT:.c=.o)
DIROPS	= ./libops
SRCOPS	= $(DIROPS)/push.c\
		  $(DIROPS)/swap.c\
		  $(DIROPS)/s_swap.c\
		  $(DIROPS)/rotate.c\
		  $(DIROPS)/r_rotate.c\
		  $(DIROPS)/revrot.c\
		  $(DIROPS)/r_revrot.c
OBJOPS	= $(SRCOPS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(TARGET)

$(TARGET): $(OBJFT) $(OBJOPS)
	@ar rcs $(TARGET) $(OBJFT) $(OBJOPS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJFT) $(OBJOPS)

fclean: clean
	@rm -f $(TARGET)

re: fclean

.PHONY: all clean fclean re
