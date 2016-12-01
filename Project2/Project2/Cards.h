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
	Cards();
	int getTotalNumberOfCards();
	int setTotalNumberOfCards();
	string getColor();
	string setColor();
	string getSpecialCards();
	string setSpecialCards();

};
#endif // !CARDS_H
