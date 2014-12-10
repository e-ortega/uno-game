#include "Player_Hand.h"

Player_Hand::Player_Hand()
    :card_qty(7)
{
    //for(int )
}

void Player_Hand::get_card(Deck& deck)
{
    Card* card;
    for(size_t i =0; i<card_qty; ++i)
    {
        card  = deck.get_card();
        hand.push_back(card);
    }
}
