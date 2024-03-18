CC := gcc
FLAGS := -Wall -Werror -Wextra

LIBS_FOLDER := ./libs/
LIBFT := $(addprefix $(LIBS_FOLDER), /libft)
LIBS := $(addprefix $(LIBFT), /libft.a)

NAME := push_swap

HEADER := src/includes/push_swap.h

SRC_FOLDER := src/
SRC_FILES := $(addsuffix .c, main ft_dblst_new ft_dblstadd_back ft_dblstadd_front) \
			 $(addsuffix .c, ft_dblstfirst ft_dblstlast ft_push ft_swap ft_rotate) \
			 $(addsuffix .c, ft_reverse_rotate ft_print_movement ft_put_order ft_init_stack) \
			 $(addsuffix .c, ft_build_list ft_clear_stack ft_dblstclear ft_print_error) \
			 $(addsuffix .c, ft_verify_duplicate ft_dblstsize ft_sort ft_sort_two ft_sort_three) \
			 $(addsuffix .c, ft_is_ordered ft_sort_others ft_order_b_in_a ft_put_target ft_find_min_value) \
			 $(addsuffix .c, ft_movement_in_b ft_movement_in_a ft_put_a_in_b ft_order_a ft_free_split ft_find_target ft_movement_in_both)
SRC := $(addprefix $(SRC_FOLDER), $(SRC_FILES))

OBJS_FOLDER := obj/
OBJS := $(SRC:$(SRC_FOLDER)%.c=$(OBJS_FOLDER)%.o)

all: libft $(NAME)

libft:
	@echo "Compilando Libft..."
	@make all bonus new_fun -C $(LIBFT) $(FLAGS) --no-print-directory

clean:
	@echo "Removendo objects..."
	@rm -rf obj
	@echo "Pronto!"

fclean: clean
	@echo "Removendo executáveis..."
	@rm -f push_swap
	@echo "Feito!"

re: fclean all

$(OBJS_FOLDER)%.o:$(SRC_FOLDER)%.c $(HEADER)
	@mkdir -p $(OBJS_FOLDER)
	@$(CC) $(FLAGS) -o $@ -c $< && echo "Compilando: $(notdir $<)"

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(LIBS) $(INCLUDES) -o $(NAME)
	@echo "Compilando executável $@"