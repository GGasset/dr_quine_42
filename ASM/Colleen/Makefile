
ASM_FILES=Colleen.s
O_FILES=$(patsubst %.s,%.o,${ASM_FILES})

NAME=Colleen

all: ${NAME}

${NAME}: ${O_FILES}
	gcc -g -o ${NAME} ${O_FILES}

%.o: %.s
	nasm -f elf64 -g $? -o $@

re: fclean all

fclean: clean
	rm -f ${NAME}

clean:
	rm -f ${O_FILES}

.PHONY:
