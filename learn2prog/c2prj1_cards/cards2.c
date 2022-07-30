#include "cards2.h"
#include "assert.h"
#include "stdio.h"

void assert_card_valid(card_t c) {
  assert(c.value >= 2 && c.value <= 14);
  assert(c.suit >= SPADES && c.suit <= CLUBS);
}

const char *ranking_to_string(hand_ranking_t r) {
  switch (r) {
  case STRAIGHT_FLUSH:
    return "Straight flush";
    break;
  case FOUR_OF_A_KIND:
    return "Four of a kind";
    break;
  case FULL_HOUSE:
    return "Full house";
    break;
  case FLUSH:
    return "Flush";
    break;
  case STRAIGHT:
    return "Straight";
    break;
  case THREE_OF_A_KIND:
    return "Three of a kind";
    break;
  case TWO_PAIR:
    return "Two Pair";
    break;
  case PAIR:
    return "Pair";
    break;
  default:
    return "Nothing";
    break;
  }
}

char value_letter(card_t c) {
  const char letter_array[13] = "234567890JQKA";

  // is this char or pointer?
  return letter_array[c.value - 2];
}

char suit_letter(card_t c) {

  const char suit_array[4] = "shdc";
  return suit_array[c.suit];
}

void print_card(card_t c) { printf("%c%c", suit_letter(c), value_letter(c)); }

card_t card_from_letters(char value_let, char suit_let) {
  card_t c;
  return c;
}
