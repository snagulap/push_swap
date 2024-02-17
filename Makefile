NAME = push_swap

LIBFT = libft/libft.a 

SRCS = push_swap.c\
		ft_lstnew.c\
		check.c\
		sorting.c\
		sa_sb_ss.c\
		pa_pb.c\
		ra_rb_rr.c\
		rr_a_b_rr.c\
		sorting_3_5.c\
		sorting_remaining.c\

		 

RM = rm -f

OBJ = $(SRCS:.c=.o)


CC = cc
CFLAGS = -Werror -Wextra -Wall #-g -fsanitize=address
# CFLAGS = -Wall -Werror -Wextra system("leaks push_swap");
TESTER_GET  =   https://raw.githubusercontent.com/lorenuars19/push_swap_tester/main/push_swap_tester.pl
TESTER      =   ./ps_tester.pl

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(LIBFT) -o $@ $(OBJ)


%.o: %.c
	$(CC) $(CFLAGS) -c $(SRCS)

.o: %.c
	$(CC) $(CFLAGS) -c $(SRCS_B)

$(TESTER):
	curl $(TESTER_GET) -o $(TESTER)

3:	$(NAME) $(TESTER)
		perl $(TESTER) 3 50

5:	$(NAME) $(TESTER)
		perl $(TESTER) 5 100

100:	$(NAME) $(TESTER)
			perl $(TESTER) 100 10

500:	$(NAME) $(TESTER)
			perl $(TESTER) 500 10

clean:
	make clean -C libft
	-@$(RM) $(OBJ)

fclean:
	make fclean -C libft
	-@$(RM) $(OBJ)
	-@$(RM) $(NAME)
	-@$(RM) -r $(NAME).dSYM
	-@$(RM) *.pl
	-@$(RM) .push_swap_test_results.log

re: fclean all

.PHONY: all fclean clean re
