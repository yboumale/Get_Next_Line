NAME = libft.a

SRC = 	./*.c
OBJS = ./*.o

HEADER = libft.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror -I $(HEADER) $(SRC) 
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
