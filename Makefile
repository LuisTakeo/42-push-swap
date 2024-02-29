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
	rm -rf obj

fclean: clean
	rm -f push_swap

$(OBJS_FOLDER)%.o:$(SRC_FOLDER)%.c $(HEADER)
	mkdir -p obj
	@$(CC) $(FLAGS) -o $@ -c $< && echo "Compilando: $(notdir $<)"

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(LIBS) $(INCLUDES) -o $(NAME)