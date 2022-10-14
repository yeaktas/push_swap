CC		= gcc -g
NAME	= push_swap
FLAGS	= -Wall -Wextra -Werror
SRCS	= $(wildcard src/*.c)
OBJS	= $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) d
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) Libft/libft.a

d:
	make bonus -C Libft

re: fclean all

clean:
	rm -rf $(OBJS)
		rm -rf Libft/*.o

fclean:	clean		
	rm -rf $(NAME)
	rm -rf Libft/*.a
git:
	git add .
	git commit -m "$c"
	git push git@github.com:yeaktas/push_swap.git

norm:
	@norminette $(wildcard src/*.c)
	@norminette $(wildcard inc/*.h)

.PHONY: all d re clean fleanc git norm