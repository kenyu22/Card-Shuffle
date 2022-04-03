#include <string>
#include <iostream>
#include <sstream>
#include "kenny_yu_Card.h"
using namespace std;

// (3) two static string arrays (faceArray and suitsArray) initialized to represent the faces and suits
//     of the cards
const string Card::faceArray[] = { "Ace", "Deuce", "Three", "Four",
								  "Five", "Six", "Seven", "Eight",
								  "Nine", "Ten", "Jack", "Queen",
											"King" };
const string Card::suitsArray[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

// (4) Card constructor that takes 2 parameters f and s which are used to initialize the private member variables
//     face and suit when object is created in DeckOfCards.cpp
Card::Card(int f, int s) :
	face{ f }, suit{ s } {};

// (5) the toString function uses stringstream to store the "face of suit" format in the user-defined stream
//     "sString" which is then returned as a string to be called in main
std::string Card::toString() const {
	std::stringstream sString;
	sString << faceArray[face] << " of " << suitsArray[suit];

	return sString.str();
}