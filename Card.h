#ifndef CARD_H
#define CARD_H

class Card
{
public:
    Card();

private:
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
        Wild,
        Reverse,
        Skip,
        Draw_2,
        Draw_4
    };
};

#endif // CARD_H
