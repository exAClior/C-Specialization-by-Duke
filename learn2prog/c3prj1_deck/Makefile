CFLAGS=-ggdb3 -Wall -Werror -pedantic -std=gnu99
GIVEN_OBJS=deck-c4.o  eval-c4.o  future.o  input.o  main.o
MY_OBJS=cards2.o deck.o eval.o
.RECIPEPREFIX=>
test-deck: deck.o test-deck.o deck-c4.o cards2.o
>gcc -o test-deck -ggdb3 deck.o test-deck.o deck-c4.o cards2.o
clean:
>rm test poker cards2.o my-test-main.o *~
