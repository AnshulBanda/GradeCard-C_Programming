
CC = gcc
CFLAGS = -Wall -Wextra -g
SRCS = main.c intro.c student.c lib.h
OBJS = $(SRCS:.c=.o)
TARGET = final_prog

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)