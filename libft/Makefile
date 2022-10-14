NAME = libft.a

CC = gcc -Wall -Wextra -Werror

SRC = ft_atoi.c \
    ft_strlen.c \

BONUS_SRC = ft_lstnew.c \
            ft_lstadd_front.c \
            ft_lstlen.c \
            ft_lstlast.c \
            ft_lstadd_back.c\

EXTRA_SRC = ft_print_list.c \
			ft_print_node.c \
			ft_free_list.c \
			ft_free_node.c

BONUS_OBJ = $(BONUS_SRC:.c=.o)

EXTRA_OBJ = $(EXTRA_SRC:.c=.o)

OBJ = $(SRC:.c=.o)

all : $(NAME) 

$(NAME) : $(OBJ) $(BONUS_OBJ) $(EXTRA_OBJ)
	ar rc $(NAME) $^

%.o : %.c
	$(CC) -c $^

bonus : $(OBJ) $(BONUS_OBJ)
	ar rc $(NAME) $^

extra : $(OBJ) $(BONUS_OBJ) $(EXTRA_OBJ)
	ar rc $(NAME) $^

clean :
	rm -f $(OBJ) $(BONUS_OBJ) $(EXTRA_OBJ) 

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all bonus clean fclean re