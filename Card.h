#ifndef CARD_H
#define CARD_H
#include <QString>
#include <QVector>
#include <QDebug>
class Card
{
private:
    QString color;
    QString symbol;
    size_t value;

public:
    Card();
    Card( QString color, QString symbol);
    //const Card& operator=(const Card* other);

    QString getColor();
    QString getSymbol();
    size_t getValue();
    void setValue(size_t value);
    //QString getCard();
    void print_card();

};

   /* enum Color
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
        Reverse,
        Skip,
        Draw_2,
        //Wild,
        //Draw_4
    };

private:
    Color color;
    Symbol symbol;
*/


#endif // CARD_H

