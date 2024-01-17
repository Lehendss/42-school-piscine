CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/strcmp.c
NAME = libft.a
INCLUDES = includes
REM = rm -rf
LIBC = ar rc
LIBR = ranlib
OBJECTS = ${SRCS:.c=.o}

.c.o
	${CC} ${SRCS} -c $< -o ${<:.c=.o} -I ${INCLUDES}

all: ${NAME}

${NAME}: ${OBJECTS}
	${LIBC} ${NAME} ${OBJECTS}
	${LIBR} ${NAME}

fclean: clean
	${RM} ${NAME}

re: fclean all
