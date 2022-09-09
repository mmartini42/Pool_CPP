NAME			=	Bureaucrat

SRC				=	Bureaucrat.cpp main.cpp Form.cpp

HEADS			=	$(shell find . -type f -name "*.hpp")

OBJS			= 	$(SRC:%.cpp=%.o)
OBJ_DIR 		= 	compiled_sources
OBJ_PATH		= 	$(addprefix $(OBJ_DIR)/, $(OBJS))

CC				=	clang++
FLAGS			=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

#################################################################################
#									Compilation Objects							#
#################################################################################

$(OBJ_DIR)/%.o: %.cpp $(HEADS)| $(OBJ_DIR)
	mkdir -p $(@D)
	g++ $(FLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	@printf "\033[1;32mCreate OBJS_DIR $(CO_DELET)\033[3;32m [√]\033[0m\n"

#################################################################################
#									Compilation C								#
#################################################################################

$(NAME): $(OBJ_PATH)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ_PATH)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
		rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re