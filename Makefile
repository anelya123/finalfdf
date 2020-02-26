# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjada    <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/04 20:11:40 by mjada             #+#    #+#              #
#    Updated: 2020/02/26 18:54:46 by vrhaena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

FLAGS = -Wall -Wextra -Werror

INCLUDES = -I includes -I $(LIBFT_DIR)/includes

LIBFT_DIR = libft
LIBFT_FILE = $(LIBFT_DIR)/libft.a
MINILIBX_DIR = minilibx_macos
MINILIBX_FILE = $(MINILIBX_DIR)/libmlx.a
LIBFT_FLAGS = -L $(LIBFT_DIR) -lft
MINILIBX_FLAGS = -L minilibx_macos -lmlx

FRAMEWORKS = -framework OpenGL -framework AppKit

O_DIR = objects/
SRC_DIR = sources/

C_FILES = $(shell find $(SRC_DIR) -type f -name '*.c')
O_FILES = $(patsubst $(SRC_DIR)%.c, $(O_DIR)%.o, $(C_FILES))

SRC_DIRS = $(shell find $(SRC_DIR) -type d)
O_DIRS = $(patsubst $(SRC_DIR)%, $(O_DIR)%, $(SRC_DIRS))

.PHONY: clean fclean all

all: $(NAME)

$(NAME): $(LIBFT_FILE) $(MINILIBX_FILE) $(O_DIRS) $(O_FILES)
	@clang -o $(NAME) $(FLAGS) $(O_FILES) $(INCLUDES) $(LIBFT_FLAGS) $(MINILIBX_FLAGS) $(FRAMEWORKS)
	@echo "make: Done building \`$(NAME)'."

$(O_DIRS):
	@mkdir -vp $(O_DIRS)

$(LIB_FT_FILE):
	@make -C $(LIBFT_DIR)

$(MINILIBX_FILE):
	@make -C $(MINILIBX_DIR)

$(O_DIR)%.o: $(SRC_DIR)%.c
	@clang $(FLAGS) $(INCLUDES)  -o $@ -c $<

clean:
	@make -C $(LIBFT_DIR) clean
	@rm -rf $(O_DIR)
	@echo "make: Done clean of \`$(NAME)'."


fclean: clean
	@make -C $(LIBFT_DIR) fclean
	@rm -f $(NAME)
	@echo "make: Done full clean of \`$(NAME)'."


re: fclean all
	@echo "make: Done recompile everything of \`$(NAME)'."
