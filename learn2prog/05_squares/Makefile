CC = gcc
CFLAGS = -Wall -Werror -std=gnu99 --pedantic
.RECIPEPREFIX = >
myProgram : squares.o squares_test.o
>   gcc $(CFLAGS) -o myProgram squares.o squares_test.o

squares.o : squares.c
>   gcc $(CFLAGS) -c squares.c -o squares.o
