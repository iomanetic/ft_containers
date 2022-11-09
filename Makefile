NAME 	= containers

SRC 	= srcs/vector/main.cpp \

OBJ 	= $(patsubst %.cpp,%.o,$(SRC))

CFLAGS	= -Wall -Wextra -Werror

CPP 	= c++

CSTD	= -std=c++98

HEADERS	= srcs/vector/vector.hpp


all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(CSTD) $(OBJ) -o $@

%.o: %.cpp $(HEADERS)
	$(CPP) $(CFLAGS) $(CSTD) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)