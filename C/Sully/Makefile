
C_FILES=Sully.c
O_FILES=$(patsubst %.c,%.o,$(C_FILES))

NAME=Sully

all: ${NAME}

${NAME}: ${O_FILES}
	clang -o ${NAME} ${O_FILES}

%.o: %.c
	clang -Wall -Werror -Wextra -g -o $@ -c $?

clean:
	rm -f ${O_FILES}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
