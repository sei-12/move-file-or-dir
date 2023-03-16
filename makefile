CC=gcc
TARGET=main
SRC=main.c

$(TARGET): $(SRC)
	$(CC) $(SRC) -o $@