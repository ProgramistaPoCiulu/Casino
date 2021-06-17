#pragma once
#include<string>
using std::string;
class card
{
private:
	string c_suit;
	//"spades"
	//"diamonds"
	//"hearts"
	//"clubs"
	int c_value;
	//1 = Ace
	//2-10 = normal
	//11 = Jack
	//12 = Queen
	//13 = King
public:
	card();
	~card();
	card(string suit, int value);
	void show();//pokazuje karte
	void destroy();
	void operator=(int number);
};