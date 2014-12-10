#ifndef PLAYER_H
#define PLAYER_H
#include "Player_Hand.h"
class Player
{
public:
    QString id;
    int score;

    Player_Hand hand;

    Player();
};

#endif // PLAYER_H
