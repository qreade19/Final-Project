
#ifndef DECK_H
#define DECK_H
#include <iostream>
#include "Cards.h"
#include <vector>
class Deck : public Cards {
private:
	
public:
	void ShuffleDeck();
	void DrawPile();
	void DiscardPile();
};
#endif // !1
#pragma once

