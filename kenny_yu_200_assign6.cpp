#include <iostream>
#include <iomanip>
#include "kenny_yu_DeckOfCards.h"

using namespace std;
int main()
{
    DeckOfCards simDeck;
    simDeck.shuffle();

    int acc = 1;

    // (1) card object created which calls the default copy constructor while there are still more cards in
    //     the object simDeck through the bool moreCards function to deal the card one by one
    while (simDeck.moreCards()) {
        Card card(simDeck.dealCard());

        // (2) implements iomanip to format the cards correctly in the console with a width of 19
        //     followed by the toString function which returns a string in the form of FACE "of" SUIT
        cout << setfill(' ') << setw(19) << card.toString();

        if (acc++ % 4 == 0)
            cout << endl;
    }

}