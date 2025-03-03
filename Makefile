
CC = cc
CFLAGS = -Wall -Wextra -Werror 

NAME = push_swap

BONUS_NAME = checker

AR =  ar rc

SRC = 	Mandatory/algo.c Mandatory/ft_atoi.c Mandatory/index.c Mandatory/parse.c \
		Mandatory/rotate.c Mandatory/sorting_4.c Mandatory/stack_utils.c Mandatory/utils.c \
		Mandatory/ft_split.c Mandatory/main.c Mandatory/push.c Mandatory/push_to_b.c \
		Mandatory/reverse_rotate.c Mandatory/sorting_3.c Mandatory/sorting_5.c Mandatory/swap.c

BONUS = Bonus/checker.c Bonus/apply_move.c Bonus/checker_utils.c \
		Bonus/ft_split.c Bonus/parse_bonus.c Bonus/utils_utils.c \
		Bonus/GNL/get_next_line.c Bonus/GNL/get_next_line_utils.c \
		Bonus/push_bonus.c Bonus/reverse_rotate_bonus.c Bonus/rotate_bonus.c \
		Bonus/swap_bonus.c

OBJ = ${SRC:.c=.o}
BONUS_OBJ = ${BONUS:.c=.o}

HEADER = Mandatory/push_swap.h Bonus/checker.h

all :${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS}  ${OBJ} -o ${NAME}

bonus : ${BONUS_OBJ}
	${CC} ${CFLAGS} ${BONUS_OBJ} -o ${BONUS_NAME}

%.o:%.c  ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJ} ${BONUS_OBJ}

fclean :clean   
	rm -f ${NAME} ${BONUS_NAME}

re : fclean all
