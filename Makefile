NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = check_errors.c \
		check_sorting.c \
		create_list.c \
		get_cost_move.c \
		get_current_pos.c \
		get_final_pos.c \
		get_target_pos.c \
		main.c \
		move_cheapest.c \
		push.c \
		reverse.c \
		rotate.c \
		sort_after_three.c \
		sort_list.c \
		sort_up_to_three.c \
		swap.c \

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(MAKE) --no-print-directory -C libft
	$(CC) $(CFLAGS) $(OBJ) -L libft/. -lft -o $(NAME)

clean :
	$(MAKE) --no-print-directory fclean -C libft
	rm -f $(OBJ)
	rm -f $(BONUS_OBJ)

fclean : clean
	rm -f $(NAME)
	rm -f $(BONUS)

re : fclean
	make all

.PHONY : all clean fclean re bonus