#include "Deck.h"
#include <time.h>
Deck::Deck()
    :deck_size( color_qty * symbol_qty  )
{
    build_deck();
    //print_deck();
}

void Deck::build_deck()
{
    cards.reserve(color_qty*symbol_qty);
    for(size_t i = 0; i < color_qty; ++i)
    {
        for(size_t j = 0; j < symbol_qty; ++j)
        {
           Card* card = new Card(color[i],symbol[j]);
           cards.push_back(card);

        }
    }

}

void Deck::print_deck()
{

    for(int i = 0; i < cards.size(); ++i)
    {
        Card* card = cards[i];

        card->print_card();

    }
}


/*
{
    //reset_deck();
}

void Deck::reset_deck()
{

    int index = 0;
    Card current;

    for(int color = 0; color < 4; ++color)
      {
        for(int symbol = 0; symbol < 13; ++symbol)
        {
            full_deck[index]  = Card(color, symbol);
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


}*/


