CFLAGS=-ggdb3 -Wall -Werror -pedantic -std=gnu99
GIVEN_OBJS=deck.o  eval.o  future.o  input.o  main.o eval-c4.o deck-c4.o
CC=gcc

test: cards2.o my-test-main.o
	$(CC) -o test -ggdb3 cards2.o my-test-main.o
poker: $(GIVEN_OBJS) cards2.o
	$(CC) -o poker -ggdb3  cards2.o $(GIVEN_OBJS)
clean:
	rm test poker cards.o my-test-main.o *~
