##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## makethefile
##

NAME	=	my_hunter

all:	$(NAME)

$(NAME):
	@echo "start program"
	make -C lib/my
	gcc -o $(NAME) hunter.c -Llib/my -lmy -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window
	@echo "end program"

clean:
	make -C lib/my clean

fclean:	clean
	rm -f $(NAME)
	make -C lib/my fclean

re:	fclean all
