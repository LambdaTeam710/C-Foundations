CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = Lists
SRCS = main.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstclear.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
