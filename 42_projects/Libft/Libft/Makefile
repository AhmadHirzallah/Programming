# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Source files
#comment	SRCS = ft_isalpha.c main.c
#comment 2	SRCS = ft_isdigit.c main.c
SRCS = 	ft_memcpy.c	ft_memset.c ft_strlen.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c  main.c
OBJS = $(SRCS:.c=.o)

# Executable name
EXEC = program

all: $(EXEC)

$(EXEC): $(OBJS) libft.h
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re
