#include "Deck.h"
#include <time.h>
Deck::Deck()

{
    reset_deck();
}

void Deck::reset_deck()
{
    int index = 0;
      for(int color = 0; color < 4; ++color)
      {
        for(int symbol = 0; symbol < 13; ++symbol)
        {
          //Card(Color color, Symbol symbol);
          //  suit			rank
           Card* card =  new Card( (Color) color, (Symbol) symbol);
          full_deck[index]  = card;

          used_cards[index] = 0;
          index++;
        }
      }
      Card getNextCard();
}

Card Deck::next_card()
{

    srand(time(NULL));
    int index = rand() % 52;//random card
    while(used_cards[index] == 1)//indicates if card is being used
      {
        index = rand() % 52;
      }
      used_cards[index] = 1;//if not set card to a 1 to indicate it being used
      return *(full_deck[index]);//return that same card
}

void Deck::print_deck()
{
    //Card card;
    //for(int i = 0; i<full_deck.size(); ++i)
    //{
    //    card = full_deck[i];
    //    QString test = card.getCard();
    //    qDebug() << test;
    //}
}


