CC = gcc


CFLAGS = -Wall -Wextra -std=c99


SRCS = main.c case1.c stud_entry.c stud_grade.c intro.c case3.c


OBJS = $(SRCS:.c=.o)


TARGET = my_program


$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS) $(TARGET)
