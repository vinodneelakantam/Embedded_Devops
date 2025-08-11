CC = gcc
CFLAGS = -I./include -Wall -Wextra -std=c11
LDFLAGS = -pthread

SRC = main.c
OBJ = $(SRC:.c=.o)
TARGET = freertos_app

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)