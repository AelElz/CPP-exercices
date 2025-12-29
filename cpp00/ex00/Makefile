NAME = ex00

CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "CPP file compiled"

%.o:%.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "CPP object removed"

fclean: clean
	@rm -f $(NAME)
	@echo "CPP excute file removed"

re: fclean all

.PHONY: clean
