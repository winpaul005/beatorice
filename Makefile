CC = gcc

CFLAGS = -g
LIBS = Gdi32.lib
LIBARG = -lgdi32 -luser32

main :main.c
	$(CC)   $^ -o $@ $(LIBARG)
