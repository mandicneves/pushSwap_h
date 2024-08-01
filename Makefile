GREEN := \033[1;32m

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

NAME = push_swap

SRC_FILES = algo_operations.c cost.c input_checks.c main.c moviments.c utils.c \
position.c push.c rotate_reverse.c rotate.c sort.c stack_utils.c stack.c swap.c \
system_utilities.c

SRC_DIR = sources

OBJ_DIR = objects

HEADER = ./include/push_swap.h

SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJ = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC = cc
RM = rm -rf

CFLAGS = -O3 -Wall -Wextra -Werror

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
				@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_DIR) $(OBJ) $(HEADER)
		@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -lm -o $(NAME)
		@echo "$(GREEN)Compilation done!"

$(LIBFT):
		@$(MAKE) -C $(LIBFT_PATH) >/dev/null

$(OBJ_DIR):
			@mkdir -p $(OBJ_DIR)

clean:
		@$(MAKE) -C $(LIBFT_PATH) clean > /dev/null
		@$(RM) $(OBJ_DIR)

fclean: clean
		@$(MAKE) -C $(LIBFT_PATH) fclean > /dev/null
		@$(RM) $(NAME)
		@echo "$(GREEN) Cleaning done!"

re: fclean all

.PHONY: all clean fclean re libft