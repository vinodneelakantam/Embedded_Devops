# Makefile for Mbed Application

CC = g++
CFLAGS = -Wall -Wextra -std=c++11
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = mbed_app

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)