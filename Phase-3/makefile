CC = gcc


CFLAGS = -Wall -Wextra -std=c99


SRCS = main.c intro.c lib.h create.c  display.c append.c


OBJS = $(SRCS:.c=.o)


TARGET = program


$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS) $(TARGET)