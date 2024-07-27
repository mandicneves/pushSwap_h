LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

NAME = push_swap

SRC_FILES = input_checks.c check_utils.c

SRC_DIR = sources

OBJ_DIR = objects

HEADER = ./include/push_swap.h

SRCS = $(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJ = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC = cc
RM = rm -rf

CFLAGS = -O3 -Wall -Wextra -Werror

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)
				$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_DIR) $(OBJ) $(HEADER)
		$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -lm -o $(NAME)

$(LIBFT):
		$(MAKE) -C $(LIBFT_PATH)

$(OBJ_DIR):
			mkdir -p $(OBJ_DIR)

clean:
		$(MAKE) -C $(LIBFT_PATH) clean
		$(RM) $(OBJ_DIR)

fclean: clean
		$(MAKE) -C $(LIBFT_PATH) fclean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re libft