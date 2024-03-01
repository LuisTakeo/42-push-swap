CC := gcc
FLAGS := -Wall -Werror -Wextra

LIBS_FOLDER := ./libs/
LIBFT := $(addprefix $(LIBS_FOLDER), /libft)
LIBS := $(addprefix $(LIBFT), /libft.a)

NAME := push_swap

HEADER := src/includes/push_swap.h

SRC_FOLDER := src/
SRC_FILES := $(addsuffix .c, main)
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