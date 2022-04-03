#ifndef KENNY_YU_CARD_H
#define KENNY_YU_CARD_H
#include <string>
class Card {
public:
	const static int FACE_COUNT = 13;
	const static int SUIT_COUNT = 4;
	Card(int f, int s);
	std::string toString() const;
private:
	const static std::string faceArray[FACE_COUNT];
	const static std::string suitsArray[SUIT_COUNT];
	int face;
	int suit;
};
#endif