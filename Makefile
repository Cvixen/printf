NAME 	=	libftprintf.a
CC		=	gcc
SRC		=	ft_printf.c	ft_selector.c	ft_printf_c_s.c	ft_printf_d_u_i.c \
			ft_print_x_X_p.c
OBJS = ${SRC:.c=.o}
HEADER = ft_printf.h
LIBC = ar rc
LIBR = ranlib
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

.PHONY: all clean fclean re

.c.o: ${HEADER}
	${CC} ${CFLAGS} -c $< -o${<:.c=.o}

all		: ${NAME}

${NAME}	: ${OBJS} ${HEADER}
		${LIBC} ${NAME} ${OBJS}
		${LIBR} ${NAME}
		
clean:
		${RM} ${OBJS} 

fclean: clean
		${RM} ${NAME}

re: fclean all
