#include <iostream>
#include "Cards.h"
using namespace std;
Cards::Cards() {

}
//returns the total number of cards
int Cards::getTotalNumberOfCards() {
	return TotalNumberOfCards;
}
int Cards::setTotalNumberOfCards() {
	//actual total number of cards in the deck
	TotalNumberOfCards = 108;
	return NULL;
}
//returns the color of the cards
string Cards::getColor() {
	return Color;
}
string Cards::setColor() {
	//array of the four main colors and the wild black card
	string MainColorOfCards[5] = { "Black", "Red", "Blue", "Yellow", "Green" };
	return NULL;
}
string Cards::getSpecialCards() {
	return SpecialCard;
}
string Cards::setSpecialCards() {
	return NULL;
}