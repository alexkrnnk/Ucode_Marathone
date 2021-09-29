.PHONY: all READ clear

SRCS := $(wildcard src/*.c)

CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -lncurses


all: HEADER

HEADER:
	$(CC) $(CFLAGS) ${SRCS} -o matrix_rain

clean: 
	@rm -f mx_matrix_rain

uninstall:
	@rm -f mx_matrix_rain

reinstall:
	make uninstall
	make
