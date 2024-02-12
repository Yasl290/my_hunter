##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## makefile
##

SRC	=	my_charlowcase.c	\
		my_compute_power_rec.c	\
		my_compute_square_root.c	\
		my_find_prime_sup.c	\
		my_getnbr.c	\
		my_is_alpha.c	\
		my_is_alphanum.c	\
		my_isneg.c	\
		my_is_prime.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_showmem.c	\
		my_showstr.c	\
		my_show_word_array.c	\
		my_sort_int_array.c	\
		my_strcapitalize.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isupper.c	\
		my_str_isnum.c	\
		my_str_isprintable.c	\
		my_strlen.c	\
		my_strlowcase.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_strstr.c	\
		my_str_to_word_array.c	\
		my_strupcase.c	\
		my_swap.c	\
		my_unsigned_nbr.c	\
		my_unsigned_o.c	\
		funct_mini_printf.c	\
		my_printf.c	\
		printf_flags.c	\
		unsigned_flags.c	\
		my_unsigned_x.c	\
		my_unsigned_upperx.c	\
		get_flags.c	\
		padding.c	\
		padding_char.c	\
		print_f.c	\
		print_upperf.c	\
		initia.c	\
		game.c	\
		game_elements.c	\
		env_check.c	\
		starting_hunter.c	\
		hunter_functions.c	\
		images_hunter.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	+=	-Wall -Wextra -I include/ -Llib/my -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
	@echo "start"
	ar rc libmy.a $(OBJ)
	@echo "end"

clean:
	rm  $(OBJ)

fclean:
	rm libmy.a

re:	fclean $(NAME)
