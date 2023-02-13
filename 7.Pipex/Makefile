FILES =	pipex.c pipex_pt2.c

OBJS = ${FILES:.c=.o}

NAME = pipex

CC = cc

INCLUDE = -I ./ -I ./libft 
LIB = -L ./libft -lft

CFLAGS = -Wall -Wextra -Werror


${NAME}: 	${OBJS}
		+${MAKE} -C ./libft/
		${CC} ${CFLAGS} -o ${NAME} ${OBJS} ${LIB} ${INCLUDE} 

all:	${NAME}


clean:	
		+${MAKE} -C ./libft/ clean
		rm -f ${OBJS}
		rm -f ${OBJSBONUS}
		rm -rf *.d

fclean:	clean;
		+${MAKE} -C ./libft/ fclean
		rm -f ${NAME}
		rm -f ${NAMEBONUS}

re:	fclean all


.PHONY: all clean fclean re