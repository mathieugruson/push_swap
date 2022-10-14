NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = check_errors.c \
		check_sorting.c \
		push.c \
		reverse.c \
		rotate.c \
		swap.c \
		push_swap.c \
		create_list.c \
		sort_list.c \
		find_final_position.c \
		update_current_positions.c \
		update_costs_move.c \
		fill_list.c \
		doublerotate.c \
		doublereverse.c \
		
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