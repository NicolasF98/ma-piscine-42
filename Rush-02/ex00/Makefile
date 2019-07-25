SRCS 	= main.c ft_char_to_int.c ft_did_not_find.c ft_display_array.c ft_putchar.c ft_putstr.c ft_display_numbers.c ft_strlen.c ft_make_dict.c

OBJ		= main.o ft_char_to_int.o ft_did_not_find.o ft_display_array.o ft_putchar.o ft_putstr.o ft_display_numbers.o ft_strlen.o ft_make_dict.o

HEADER 	= ourft.h

OPTION = -c ${HEADER}

FLAG 	= -Wall -Wextra -Werror

NAME	= rush-02

all:	${NAME}

			gcc ${FLAG} ${OPTION} ${SRCS} 
			gcc ${FLAG} -o ${NAME} ${OBJ}

fclean:		
			rm -rf *.o ${NAME}

re: fclean all
