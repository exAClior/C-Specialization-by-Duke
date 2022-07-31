#include "cards2.h"
#include "stdio.h"

int main(void) {
  for (int i = 0; i < 52; i++) {

    card_t test = card_from_num(i);
    assert_card_valid(test);
    print_card(test);
    card_t test_back = card_from_letters(value_letter(test),suit_letter(test));
    assert_card_valid(test_back);
    printf(" is also ");
    print_card(test_back);
    printf("\n");
  }
}
