NAME 		=	megaphone
CC			=	clang++
CFLAGS		=	-Wall -Werror -Wextra
SRC 		=	main.cpp
OBJ 		=	$(SRC:.cpp=.o)


RED			=	\033[0;31m
GREEN		=	\033[0;32m
WHITE		=	\033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@printf "[ $(NAME) ] Compiling...\r"
	@($(CC) -o $(NAME) $(SRC) $(CFLAGS))

clean:
	@rm -f $(OBJ)
	@printf "Object files ${RED}removed\n${WHITE}"

fclean: clean
	@rm -f $(NAME)
	@printf "[ $(NAME) ] ${RED}removed\n${WHITE}"

re: fclean all

.PHONY: all clean fclean re


