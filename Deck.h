#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <QDebug>
#include <QVector>
#include <vector>
class Deck : public Card
{
    //http://stackoverflow.com/questions/18816320/how-to-create-a-poker-hand-class-in-c
private:
    #define deck_size 100
    //QVector<Card*> full_deck;
     std::vector<Card> full_deck;
    //Card full_deck[deck_size];
    int used_cards[deck_size];

public:
    Deck();
    void reset_deck();
    Card next_card();
    void print_deck();

};

#endif // DECK_H

