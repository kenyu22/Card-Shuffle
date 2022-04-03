#ifndef KENNY_YU_DECKOFCARDS_H
#define KENNY_YU_DECKOFCARDS_H
#include "kenny_yu_Card.h"
#include <vector>
class DeckOfCards {
public:
	DeckOfCards();
	void shuffle();
	Card dealCard();
	bool moreCards();
private:
	const static int TOTAL_CARDS = 52;
	std::vector<Card> deck;
};
#endif