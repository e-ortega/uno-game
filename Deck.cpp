#include "Deck.h"
#include <time.h>
Deck::Deck()

{

    reset_deck();
}

void Deck::reset_deck()
{

    //full_deck.reserve(100);
    //size_t f = full_deck.capacity();
    //qDebug() <<"lenght :"<< f;
    int index = 0;
      for(int color = 0; color < 4; ++color)
      {
        for(int symbol = 0; symbol < 13; ++symbol)
        {
          //Card(Color color, Symbol symbol);
          //  suit			rank
          // Card* card =  new Card( (Color) color, (Symbol) symbol);
          //full_deck[index]  = card;
           full_deck[index]  = Card( (Color) color, (Symbol) symbol);
           used_cards[index] = 0;
          index++;
        }
      }
      //size_t g = full_deck.size();
     // qDebug() <<"asdfasdf :"<< g;
      //Card next_card();
}

Card Deck::next_card()
{

    srand(time(NULL));
    int index = rand() % 52;
    while(used_cards[index] == 1)
      {
        index = rand() % 52;
      }
      used_cards[index] = 1;
      //return *(full_deck[index]);
      return full_deck[index];//
}

void Deck::print_deck()
{
    Card card;
    for(size_t i = 0; i<full_deck.size(); ++i)
    {
        card = full_deck[i];
        QString test = card.getCard();
        qDebug() << test;
    }
}


