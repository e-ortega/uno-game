#ifndef CARD_H
#define CARD_H
#include <QString>

class Card
{
public:
    enum Color
    {
        Red,
        Blue,
        Green,
        Yellow

    };
    enum Symbol
    {
        Zero,
        One,
        Two,
        Three,
        Four,
        Five,
        Six,
        Seven,
        Eight,
        Nine,
        //Wild,
        Reverse,
        Skip,
        Draw_2,
        //Draw_4
    };
    Color color;
    Symbol symbol;

public:
    Card(Color color, Symbol symbol);
    Color& getColor();
    Symbol& getSymbol();
    QString getCard();

};

#endif // CARD_H
