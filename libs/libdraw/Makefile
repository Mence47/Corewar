############################		Variables		############################
OK_COLOR=\x1b[32;01m
DANGER_COLOR=\x1b[1;31m
YELLOW_COLOR=\x1b[0;33m
NO_COLOR=\x1b[0m

NAME = libdraw.a

LIBMLX_DIR = ./libs/libmlx
LIBMLX = $(LIBMLX_DIR)/libmlx.a

INC_DIR = ./includes
SRCS_DIR = ./srcs
OBJS_DIR = ./objs

FLAGS += -Wall -Werror -Wextra
FLAGS += -I includes/ -I $(LIBMLX_DIR)

SRCS_FILES =	ft_create_window.c ft_draw_circle.c ft_draw_line.c \
				ft_draw_rectangle.c ft_draw_bg_gradient.c ft_create_image.c

MLX_OBJS =		mlx_init_loop.o mlx_int_str_to_wordtab.o mlx_new_image.o \
				mlx_new_window.o mlx_shaders.o mlx_xpm.o

OBJS = $(addprefix $(OBJS_DIR)/,$(SRCS_FILES:%.c=%.o))

############################		  Rules 		############################

all: $(NAME)

$(OBJS): | $(OBJS_DIR)

$(OBJS_DIR):
	@mkdir -p $@

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@gcc -g $(FLAGS) -c $< -o $@ 

$(LIBMLX):
	$(MAKE) -C $(LIBMLX_DIR)

$(NAME): $(LIBMLX) $(OBJS)
	@echo "$(YELLOW_COLOR)Building...$(NO_COLOR)"
	@ar rc $@ $(OBJS) $(addprefix $(LIBMLX_DIR)/, $(MLX_OBJS)) 
	@ranlib $@
	@echo "$(OK_COLOR)Build complete$(NO_COLOR)"

test: all
	gcc -g -I./includes -L. -ldraw -framework OpenGL -framework AppKit test.c

clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(DANGER_COLOR)Object files cleared$(NO_COLOR)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(DANGER_COLOR)Build cleared$(NO_COLOR)"

re: fclean all

.PHONY: all clean fclean re

#	by rschuppe