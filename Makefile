CC = gcc
CFLAGS = -Wall -Wextra -Werror --std=c11

all: clean build valgrind cppcheck

clean:
	rm -rf main

build:
	$(CC) $(CFLAGS) main.c linked_list_.c -o main

tets:
	./main

valgrind:
	valgrind --leak-check=full --error-exitcode=1 ./main

cppcheck:
	cppcheck --enable=all --inconclusive --std=c11 main.c linked_list_.c linked_list.h


.PHONY: all clean build test valgrind cppcheck
