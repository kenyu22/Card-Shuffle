#include "kenny_yu_DeckOfCards.h"
#include <iostream>
using namespace std;

// (6) default constructor has a nested for loop to get the suit index in order, for each respective face index:
//     (0,0) (0,1) (0,2) (0,3) (1,0) (1,1)... until all 52 cards are initialized 
DeckOfCards::DeckOfCards() {
	for (int i = 0; i < Card::FACE_COUNT; i++) {
		for (int j = 0; j < Card::SUIT_COUNT; j++) {
			Card temp(i, j);

			// (7) the vector of type Card ("deck") pushes the object "temp" which is created through the for loop
			//     for each iteration for each possible value of Card, to the back of the vector until the for loop terminates
			deck.push_back(temp);
		}
	}
}
// (8) Shuffle function shuffles the 52 cards by going through each card, and replacing it with a randomly
//     picked card from the deck until all 52 have been shuffled
void DeckOfCards::shuffle() {
	srand(time(0));
	for (int i = 0; i < TOTAL_CARDS; i++) {

		// (9) auto is of vector<Card>::iterator. declared to call deck.begin() which is
		//     used to set x equal to 0 index + 1, 2, 3... to swap all of the cards in the swap
		//     function below, with y which is the randomly picked card to swap with x.
		auto x = deck.begin() + i;
		auto y = deck.begin() + (rand() % 52);

		// (10) x and y act as pointers to the object which we can then use to dereference and get the value
		//      of the Card in (?,?) form. An Card object temp is created to store the value of x in (?,?) and then
		//      the value of y gets stored into the value of x, where y then gets the original value of x which was 
		//      stored in temp (basic swap function)
		Card temp = *x;
		*x = *y;
		*y = temp;

		
	}
	
}
// (11) the dealCard function returns the next card from the deck (acts like it is pulling from the top of the deck,
//      or in other words, the last card shuffled into the deck which is at the top) and removes it from the deck
Card DeckOfCards::dealCard() {
	// (12) c acts like a temp, but as a Card object, and holds the value of the last element in deck.
	//      We MUST subtract one because the deck.end() iterator in the vector of type Card container returns 
	//      one-PAST the last element (a theoretical element). We can then dereference this value to get
	//      the value to store in c object in form (?,?)
	Card c = *(deck.end() - 1);

	// (13) deck.pop_back() removes the last element from the vector, but the value is still stored in c,
	//      because once a card is dealt, it is no longer in the deck
	deck.pop_back();
	return c; 
}

// (14) moreCards is a bool function to return true as long as there are more cards to deal in the deck,
//      or false when there are no more cards to deal
bool DeckOfCards::moreCards() {
	return (deck.size() > 0);
}
