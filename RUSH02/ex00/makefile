CC := gcc
CFLAGS := -Wall -Wextra -Werror -g

SRCS := main.c lib.c stack.c lib2.c
DEPS := lib.h

TARGET := rush-02

final:
	gcc $(CFLAGS) *.c -o $(TARGET)

fclean:
	rm -f *.o $(TARGET) *.gch 
	rm -rf *.dSYM