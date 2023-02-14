FILES =	ft_atoi.c ft_swap_pt1.c ft_swap_pt2.c ft_swap_pt3.c ft_isdigit.c ft_calloc.c push_swap_pt1.c push_swap_pt2.c push_swap_pt3.c push_swap_pt4.c
FILESBONUS = bonus_checker_pt1.c bonus_ft_swap_pt2.c bonus_checker_pt2.c bonus_ft_swap_pt3.c bonus_checker_pt3.c bonus_ft_swap_pt1.c bonus_get_next_line.c bonus_get_next_line_utils.c ft_atoi.c ft_isdigit.c ft_strjoin.c ft_calloc.c bonus_ft_strcmp.c

OBJS = ${FILES:.c=.o}
DEPS = ${FILES:.c=.d}
OBJSBONUS = ${FILESBONUS:.c=.o}
# DEPSBONUS = ${FILESBONUS:.c=.d}
NAME = push_swap
NAMEBONUS = checker
CC = cc

INCLUDE = -I ./
CFLAGS = -Wall -Wextra -Werror


${NAME}: 	${OBJS}
		${CC} ${CFLAGS} -o ${NAME} ${OBJS} ${INCLUDE}

all:	${NAME}

${NAMEBONUS}: 	${OBJSBONUS}
		${CC} ${CFLAGS} -o ${NAMEBONUS} ${OBJSBONUS} ${INCLUDE} 

bonus:	${NAMEBONUS}

clean:	
		rm -f ${OBJS}
		rm -f ${OBJSBONUS}
		rm -rf *.d

fclean:	clean;
		rm -f ${NAME}
		rm -f ${NAMEBONUS}

re:	fclean all


.PHONY: all clean fclean re