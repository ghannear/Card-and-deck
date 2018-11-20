#include<iostream>
#include"deck.h"
#include<cstdlib>
#include<time.h>
Deck::Deck()
{
    CARD_DECK[52] = cards;    
}

void Deck::suffle(int cards)
{ 
     srand (time(NULL)); //initializing the random seed, according to cplusplus.com on random arrays

     string random_card = rand() % 52// random number generator but within the array of the deck. but instead, we can use a multidimenional array for the suit and value. and we'll probably need to use another syntax for choosing a random card. 
     cards[random_cards];
}

void Deck::deal(n)
{
     cout << "Your cards are: " << shuffle(cards);
}
