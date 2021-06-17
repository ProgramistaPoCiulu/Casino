#include"deck.h"
#include <random>
#include<ctime>

deck::deck()
{
	c_deck = new card[52];
	int value = 1;
	for (int i = 0; i < 13; i++)
	{
		*(c_deck + i) = card("spades", value);
		if (value < 13)value++;
	}
	value = 1;
	for (int i = 13; i < 26; i++)
	{
		*(c_deck + i) = card("diamonds", value);
		if (value < 13)value++;
	}
	value = 1;
	for (int i = 26; i < 39; i++)
	{
		*(c_deck + i) = card("hearts", value);
		if (value < 13)value++;
	}
	value = 1;
	for (int i = 39; i < 52; i++)
	{
		*(c_deck + i) = card("clubs", value);
		if (value < 13)value++;
	}
}
void deck::show_all()
{
	for (int i = 0; i < 52; i++)
	{
		c_deck[i].show();
	}
}
void deck::shuffle(int number)
{
	srand(time(0));
	for (int i = 0; i < number; i++)
	{
		int random = rand() % number;
		c_swap(c_deck[i], c_deck[random]);
	};
}
void deck::c_swap(card& a, card& b)
{
	card& temporary = a;
	b = a;
	a = temporary;

}
void deck::show_first()
{
	c_deck[0].show();
}
void deck::go_next(int number)
{
	for (int i=0; i < number; i++)
	{
		c_deck[i] = c_deck[i + 1];
	}
	
	delete &c_deck[52];
}