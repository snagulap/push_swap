NAME = push_swap
LIBFT = libft/libft.a 

SRCS = push_swap.c\
		ft_lstnew.c\
		check.c\
		sorting.c\
		sa_sb_ss.c


RM = rm -f

OBJ = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Werror -Wextra -Wall #-g -fsanitize=address

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(LIBFT) -o $@ $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	make clean -C libft
	# make clean -C $(NAME)
	-@$(RM) $(OBJ)

fclean:
	make fclean -C libft
	# make fclean -C $(NAME)
	-@$(RM) $(NAME)

re: fclean all

.PHONY: all fclean clean re