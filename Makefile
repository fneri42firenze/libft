NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = -rcs
RM = rm -f

SRCS := $(wildcard ft_*.c)
OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all