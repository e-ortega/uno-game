#ifndef DECK_H
#define DECK_H

#include "Card.h"
#include <QVector>

class Deck
{
private:
    const QVector<QString> color {"Red","Blue", "Green", "Yellow"};
    const QVector<QString> symbol = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Reverse", "Skip", "Draw_2"};
    QVector<Card*> cards;
    QVector<Card*> called_cards;
    size_t deck_size;
    const size_t color_qty = color.size();
    const size_t symbol_qty = symbol.size();


public:
    Deck();
    void build_deck();
    void print_deck();
    Card* get_card();
/*
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
    void print_deck();*/

};

#endif // DECK_H

