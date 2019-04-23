############################		Variables		############################
OK_COLOR=\x1b[32;01m
DANGER_COLOR=\x1b[1;31m
YELLOW_COLOR=\x1b[0;33m
NO_COLOR=\x1b[0m

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

INC_DIR = ./includes
SRCS_DIR = ./srcs
OBJS_DIR = ./obj

FUNCS =			get_next_line \
				ft_pow			ft_swap			ft_swap_ptr		ft_printchr \
				ft_str_fixlen	throw_error

MEM_DIR = memory/
MEM_FUNCS = 	ft_memalloc		ft_memdel		ft_memdel		ft_memcpy \
				ft_memmove		ft_memset		ft_memccpy		ft_memchr \
				ft_memcmp		ft_bzero		ft_wmemmove		ft_wmemset

CHR_DIR = char/
CHR_FUNCS = 	ft_isdigit		ft_isprint		ft_isalpha		ft_isascii \
				ft_isalnum		ft_tolower		ft_toupper

STR_DIR = string/
STR_FUNCS = 	ft_strlen		ft_strdup		ft_strnew		ft_strdel \
				ft_strclr		ft_strcpy		ft_strncpy		ft_strcat \
				ft_strncat		ft_strlcat		ft_strequ		ft_strnequ \
				ft_strcmp		ft_strncmp		ft_strchr		ft_strrchr \
				ft_strstr		ft_strnstr		ft_strsub		ft_strjoin \
				ft_strtrim		ft_strsplit		ft_striter		ft_striteri \
				ft_strmap		ft_strmapi		ft_strlower		ft_strupper

WCS_DIR = unicode_string/
WCS_FUNCS =		ft_wcscpy		ft_wcsdup		ft_wcsjoin		ft_wcslen \
				ft_wcsnew

OUT_DIR = output/
OUT_FUNCS = 	ft_putchar		ft_putstr		ft_putendl		ft_putnbr \
				ft_putchar_fd	ft_putstr_fd	ft_putendl_fd	ft_putnbr_fd \
				ft_putwchar		ft_putwstr

CNVRT_DIR = convert/
CNVERT_FUNCS =	ft_atoi			ft_itoa			ft_itoa_base	ft_uitoa_base \
				ft_dtoa			ft_stoa

LST_DIR = list/
LST_FUNCS =		ft_lstnew		ft_lstnew_ptr	ft_lstadd		ft_lstdelone \
				ft_lstdel		ft_lstpush		ft_lstremove	ft_lstlen \
				ft_lstiter		ft_lstmap		ft_lstget

DLST_DIR = dual_link_list/
DLST_FUNCS =	ft_dlst_create		ft_create_node		ft_create_node_ptr \
				ft_dlst_push_front	ft_dlst_push_back	ft_dlst_merge \
				ft_dlst_remove_node	ft_dlst_del			ft_dlst_get

STK_DIR = stack/
STK_FUNCS =		ft_stack_new	ft_stack_push	ft_stack_pop	ft_stack_extend	\
				ft_stack_delete

BH_DIR = bin_heap/
BH_FUNCS =		inline_funcs 	pq_init			pq_insert		pq_delete \
				pq_extract		pq_ascent		pq_drowning		pq_swap_node

FILES += $(FUNCS)
FILES += $(addprefix $(MEM_DIR), $(MEM_FUNCS))
FILES += $(addprefix $(CHR_DIR), $(CHR_FUNCS))
FILES += $(addprefix $(STR_DIR), $(STR_FUNCS))
FILES += $(addprefix $(WCS_DIR), $(WCS_FUNCS))
FILES += $(addprefix $(OUT_DIR), $(OUT_FUNCS))
FILES += $(addprefix $(CNVRT_DIR), $(CNVERT_FUNCS))
FILES += $(addprefix $(LST_DIR), $(LST_FUNCS))
FILES += $(addprefix $(DLST_DIR), $(DLST_FUNCS))
FILES += $(addprefix $(STK_DIR), $(STK_FUNCS))
FILES += $(addprefix $(BH_DIR), $(BH_FUNCS))

SRCS = $(foreach func,$(FILES),$(SRCS_DIR)/$(func).c)
OBJ = $(foreach func,$(FILES),$(OBJS_DIR)/$(func).o)

############################		  Rules 		############################

all: $(NAME)

# $(OBJ): | $(OBJS_DIR)

$(OBJS_DIR):
	@mkdir -p $@
	@mkdir -p $@/$(MEM_DIR)
	@mkdir -p $@/$(CHR_DIR)
	@mkdir -p $@/$(STR_DIR)
	@mkdir -p $@/$(WCS_DIR)
	@mkdir -p $@/$(OUT_DIR)
	@mkdir -p $@/$(CNVRT_DIR)
	@mkdir -p $@/$(LST_DIR)
	@mkdir -p $@/$(DLST_DIR)
	@mkdir -p $@/$(STK_DIR)
	@mkdir -p $@/$(BH_DIR)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	@gcc $(FLAGS) -I $(INC_DIR) -c $< -o $@

$(NAME): $(OBJ)
	@echo "$(YELLOW_COLOR)Building $@$(NO_COLOR)"
	@ar rc $@ $^
	@ranlib $@
	@echo "$(OK_COLOR)Build complete$(NO_COLOR)"

clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(DANGER_COLOR)Object files cleared$(NO_COLOR)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(DANGER_COLOR)Build cleared$(NO_COLOR)"

re: fclean all

.PHONY: all clean fclean re

#	by rschuppe