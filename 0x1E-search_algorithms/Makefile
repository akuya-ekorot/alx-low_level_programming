# Makefile for the compilation of the search algos from alx-low_level_programming
# Author: Akuya Ekorot
# Date: 10-07-2022

CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

SRC ?= $(wildcard *.c)
OBJ = $(SRC:%.c=%.o)

# Delete the object files and the binary
clean: run
	rm -f $(OBJ) search_algos

# Run the binary
run: search_algos
	./search_algos

# Compile the object files into a binary
search_algos: $(OBJ)
	$(CC) $(CFLAGS) -o search_algos $(OBJ)

# Compile the source files into object files
$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)
