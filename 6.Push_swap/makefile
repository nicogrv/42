FILES =	ft_atoi.c ft_swap_pt1.c ft_swap_pt2.c ft_swap_pt3.c ft_isdigit.c ft_calloc.c push_swap_pt1.c push_swap_pt2.c push_swap_pt3.c push_swap_pt4.c
FILESBONUS = bonus_checker_pt1.c bonus_ft_swap_pt2.c bonus_checker_pt2.c bonus_ft_swap_pt3.c bonus_ft_swap_pt1.c bonus_get_next_line.c bonus_get_next_line_utils.c ft_atoi.c ft_isdigit.c ft_strjoin.c ft_calloc.c

OBJS = ${FILES:.c=.o}
DEPS = ${FILES:.c=.d}
OBJSBONUS = ${FILESBONUS:.c=.o}
DEPSBONUS = ${FILESBONUS:.c=.d}
NAME = push_swap
# NAMEBONUS = checker_bonus
NAMEBONUS = checker
CC = gcc

INCLUDE = -I ./
FLAGS = -Wall -Werror -Wextra

.c.o:
	${CC} -g ${FLAGS} -c ${INCLUDE}  $< -o ${<:.c=.o}

all: 	${OBJS} ${OBJSBONUS}
		${CC} -g ${FLAGS} -o ${NAME} ${OBJS} ${INCLUDE}
		${CC} -g ${FLAGS} -o ${NAMEBONUS} ${OBJSBONUS} ${INCLUDE} 

push_swap: 	${OBJS}
		${CC} -g ${FLAGS} -o ${NAME} ${OBJS} ${INCLUDE}

bonus: 	${OBJSBONUS}
		${CC} -g ${FLAGS} -o ${NAMEBONUS} ${OBJSBONUS} ${INCLUDE} 

clean:	
		rm -f ${OBJS}
		rm -f ${OBJSBONUS}
		rm -rf *.d

fclean:	clean;
		rm -f ${NAME}
		rm -f ${NAMEBOMUS}

re:	fclean all


.PHONY: all clean fclean re