#ifndef PLAYER_HAND_H
#define PLAYER_HAND_H
#include "Deck.h"
class Player_Hand
{
public:
    QVector<Card*> hand;
    const size_t card_qty;
    Player_Hand();
    void get_card(Deck &deck);

};

#endif // PLAYER_HAND_H
