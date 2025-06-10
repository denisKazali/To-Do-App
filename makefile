CC = clang
CFLAGS = -std=c99 -Wall -Wextra
SRC = source/main.c source/menu.c source/tasks_create.c source/file_utils.c
OBJ = main.o menu.o tasks_create.o file_utils.o
TARGET = app

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(SRC) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ) $(TARGET)
