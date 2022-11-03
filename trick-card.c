#include "BombCatHeader.h"

void trick (int CardPileInTrick [],int len) {
  srand((unsigned int)time(0));
  for (int i = 0;i < len;i++) {
	int x = rand() % len;
	int y = rand() % len;
	int temp = CardPileInTrick[x];
	CardPileInTrick[x] = CardPileInTrick [y];
	CardPileInTrick[y] = temp;
  }
}