#pragma once
#include "card.h"
class deck
{
private:
	card* c_deck;
public:
	deck();
	void show_all();
	void shuffle(int number);
	void c_swap(card& a, card& b);
	void show_first();
	void go_next(int number);
};