NAME= push_swap
LIBFT= libft_push_swap/libft.a
NAMEBONUS= checker
CC= cc
CFLAGS= -Wall -Wextra -Werror #-fsanitize=address -g3
FILE=	workshop.c	\
		swap_stack.c	\
		rotate_stack.c	\
		push_to_stack.c	\
		check_functions.c	\
		sort_funcs.c	\
		outils_sort.c	\
		initia.c

BONUS=	checker_bonus.c	\
		move_checker_bonus.c	\
		mv2_check_bonus.c \
		outils_check_bonus.c	\
		outils2_check_bonus.c	\

OBJ=	$(FILE:.c=.o)

BONUSO= $(BONUS:.c=.o)

all: $(LIBFT) $(NAME)

$(NAME):	$(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(FILE) $(LIBFT) -o $(NAME) 

$(LIBFT):
	make all -C ./libft_push_swap

bonus: $(NAMEBONUS)

$(NAMEBONUS): $(BONUSO) $(LIBFT)
	$(CC) $(CFLAGS) $(BONUS) $(LIBFT) -o $(NAMEBONUS)
 
clean:
	rm -rf $(OBJ) $(BONUSO)
	make clean -C ./libft_push_swap

fclean: clean
	rm -rf $(NAME) $(NAMEBONUS)
	make fclean -C ./libft_push_swap

re: fclean all
