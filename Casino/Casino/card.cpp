#include "card.h"
#include<iostream>
using namespace std;
card::card()
{
	c_suit = "spades";
	c_value = 1;
}
card::card(string suit, int value)
{
	if (suit != "spades" and suit != "diamonds" and suit != "hearts" and suit != "clubs")
	{
		cout << "Error: wrong suit's name!\n";
	}
	else
	{
		c_suit = suit;
	}
	if (value < 1 or value > 13)
	{
		cout << "Error:wrong card's value!\n";
	}
	else
	{
		c_value = value;
	}
}
card::~card()
{

}
void card::show()
{
	string value;
	if (c_value == 1)value = "Ace";
	if (c_value == 2)value = "2";
	if (c_value == 3)value = "3";
	if (c_value == 4)value = "4";
	if (c_value == 5)value = "5";
	if (c_value == 6)value = "6";
	if (c_value == 7)value = "7";
	if (c_value == 8)value = "8";
	if (c_value == 9)value = "9";
	if (c_value == 10)value = "10";
	if (c_value == 11)value = "Jack";
	if (c_value == 12)value = "Queen";
	if (c_value == 13)value = "King";
	cout << value << " of " << c_suit << endl;
}
void card::destroy()
{
	c_value = 0;
}
void card::operator=(int number)
{
	c_value = number;
}