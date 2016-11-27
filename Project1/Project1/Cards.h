#pragma once
#ifndef CARDS_H
#define CARDS_H

#include <iostream>
#include <string>
using namespace std;

class Cards {
private:
	string CardNames;
	string Color;
	int CardNumber;
	string SpecialCard;
	int TotalNumberOfCards;

public:
	Cards() {

	}
	//returns the total number of cards
	int getTotalNumberOfCards() {
		return TotalNumberOfCards;
	}
	int setTotalNumberOfCards() {
		//actual total number of cards in the deck
		TotalNumberOfCards = 108;
	}
	//returns the color of the cards
	string getColor() {
		return Color;
	}
	string setColor() {
		//array of the four main colors and the wild black card
		string MainColorOfCards[5] = {"Black", "Red", "Blue", "Yellow", "Green" };
		
	}
	string getSpecialCards() {
		return SpecialCard;
	}
	string setSpecialCards() {

	}

};
#endif // !CARDS_H
