MAIN = ./src/push_swap.c

SOURCES = 	./src/cheapest_move.c \
			./src/cost.c \
			./src/first_push.c \
			./src/index.c \
			./src/move_push.c \
			./src/move_reverserotate.c \
			./src/move_rotate.c \
			./src/move_swap.c \
			./src/set_pos.c \
			./src/sort_three.c \
			./src/target.c \
			./src/utils.c \
			./src/check_order.c \
			./src/check_error.c \



NAME = push_swap

LIBFT = libft.a

CC		= gcc

CFLAGS	= -Wextra -Wall -Werror -g #-fsanitize=address

GREEN		:=	\033[0;32m

RED			:=	\033[1;31m

WHITE		:=	\033[1;37m

BOLD		:=	\033[1;1ms

CYAN		:=	\033[0;36m

OBJS = $(SOURCES:.c=.o)

OBJ_MAIN = $(MAIN:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(OBJ_MAIN)
		@$(MAKE) --no-print-directory -C ./libft
		@cp ./libft/$(LIBFT) $(LIBFT)
		@echo "$(GREEN) [Success] libft compilation."
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJ_MAIN) $(OBJS) $(LIBFT)
		@echo "$(GREEN) [Success] push_swap compilation."

clean:
	@$(MAKE) clean --no-print-directory -C ./libft
	@echo "$(CYAN) [cleaned] libft objects."
	@rm -rf $(OBJS) $(OBJ_MAIN)
	@echo "$(CYAN) [cleaned] push_swap objects."

fclean: clean
	@$(MAKE) fclean --no-print-directory -C ./libft
	@echo "$(CYAN) [cleaned] libft library."
	@rm -rf $(NAME) $(LIBFT)
	@echo "$(CYAN) [cleaned] executables.$(WHITE)"

re: fclean all
