# Définition des codes de couleur
RED := \033[0;31m
GREEN := \033[0;32m
YELLOW := \033[0;33m
NC := \033[0m # No Color

NAME 		=	philo

LIBFT_PATH	=	./libft/

LIBFT_LIB	=	./libft/libft.a

LIBFT_FILE	=	libft.a

LIBFT_LIB	=	$(addprefix $(LIBFT_PATH), $(LIBFT_FILE))

SRC = src/main.c 

OBJ = ${SRC:.c=.o}

CC		= gcc

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o $@

all:	${NAME}

lib:
	@echo "$(YELLOW)COMPILING $(LIBFT_PATH)\n$(NC)"
	@make -C $(LIBFT_PATH)
	@echo "$(GREEN)LIBFT_lib created\n$(NC)"

$(NAME): lib $(OBJ)
	@echo "$(YELLOW)nCOMPILING PHILOSOPHER...\n$(NC)"
	$(CC) $(OBJ) $(LIBFT_LIB) -o $(NAME) -lreadline
	@echo "$(GREEN)./philosopher created\n$(NC)"

clean:
	@echo "$(RED)Deleting Obj file in $(LIBFT_PATH)...\n$(NC)"
	@make clean -sC $(LIBFT_PATH)
	@echo "$(GREEN)Done\n$(NC)"
	@echo "$(RED)Deleting philosopher object...\n$(NC)"
	@rm -f $(OBJ)
	@echo "$(GREEN)Done\n$(NC)"

fclean: clean
	@echo "$(RED)Deleting philosopher executable...$(NC)"
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_PATH)
	@echo "$(GREEN)Done\n$(NC)"

re: fclean all

re:		fclean all

.PHONY: all clean fclean re