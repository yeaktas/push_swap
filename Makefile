CC		= gcc -g
NAME	= push_swap
FLAGS	= -Wall -Wextra -Werror
SRCS	= $(wildcard src/*.c)
OBJS	= $(SRCS:.c=.c)

all : $(NAME)

$(NAME) : d
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) Libft/libft.a

d:
	make -C Libft

re: all

clean:

fclean:

git:
	git add .
	git commit -m "$c"
	git push git@github.com:yeaktas/push_swap.git

norm:
	@norminette $(wildcard src/*.c)

.PHONY: all d re clean fleanc git norm