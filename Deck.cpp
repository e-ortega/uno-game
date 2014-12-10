#include "Deck.h"
#include <QTime>
Deck::Deck()
    :deck_size(0)
{
    build_deck();
    //print_deck();
}

void Deck::build_deck()
{
    called_cards.clear();
    cards.reserve(color_qty*symbol_qty);
    for(size_t i = 0; i < color_qty; ++i)
    {
        for(size_t j = 0; j < symbol_qty; ++j)
        {
           Card* card = new Card(color[i],symbol[j]);
           card->setValue();
           //size_t s = card->getValue();
           //QString c = card->getSymbol();
           //qDebug() << "value card of "<< card->getColor() << c <<" is " << s;
           cards.push_back(card);

        }
    }
    deck_size = cards.size();
    //qDebug() << deck_size;

}

void Deck::print_deck()
{

    for(size_t i = 0; i < deck_size; ++i)
    {
        Card* card = cards[i];

        card->print_card();

    }
}


Card *Deck::get_card()
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
    int random_value = qrand() % deck_size;

    Card* card = cards[random_value];
    cards.remove(random_value);
    --deck_size;
    //qDebug() << deck_size;
    return card;
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


