#include "Card.h"


Card::Card()
{

}

Card::Card(QString color, QString symbol)
    :color(color)
    ,symbol(symbol)
{

}

QString Card::getColor()
{
    return color;
}

QString Card::getSymbol()
{
    return symbol;
}

size_t Card::getValue()
{
    return value;
}

void Card::setValue()
{
    //0-9: valor que indica la carta
    //Draw Two, Reverse y Skip: 20 puntos
    //Wild y Wild Draw Four: 50 puntos


    if(symbol == "Zero")
        value = 0;
    else if( symbol == "One")
        value = 1;
    else if( symbol == "Two")
        value = 2;
    else if( symbol == "Three")
        value = 3;
    else if( symbol == "Four")
        value = 4;
    else if( symbol == "Five")
        value = 5;
    else if( symbol == "Six")
        value = 6;
    else if( symbol == "Seven")
        value = 7;
    else if( symbol == "Eight")
        value = 8;
    else if( symbol == "Nine")
        value = 9;
    else if( symbol == "Reverse")
        value = 20;
    else if( symbol == "Skip")
        value = 20;
    else if( symbol == "Draw_2")
        value = 20;


}

void Card::print_card()
{
    qDebug() << symbol << " " << color;
}


/*
Card::Card(card color, card symbol)
    :card.color(color)
    ,card.symbol(symbol)
{



}


Card::Card(Color color, Symbol symbol)
    :color(color)
    ,symbol(symbol)
{



}


const Card &Card::operator=(const Card *other)
{
   // Avoid this object to overwrite itself
   if ( this != other )
   {
      color = other->color;
      symbol = other->symbol;
   }
   return *this;
}

Card::Color &Card::getColor()
{
    return color;
}

Card::Symbol &Card::getSymbol()
{
    return symbol;
}

QString Card::getCard()
{
    QString result = "";
    Color color  = getColor();
    Symbol symbol = getSymbol();
    switch (symbol) {
        case Zero:
            result += "0";
            break;
        case One:
            result += "1";
            break;
        case Two:
            result += "2";
            break;
        case Three:
            result += "3";
            break;
        case Four:
            result += "4";
            break;
        case Five:
            result += "5";
            break;
        case Six:
            result += "6";
            break;
        case Seven:
            result += "7";
            break;
        case Eight:
            result += "8";
            break;
        case Nine:
            result += "9";
            break;
        case Reverse:
            result += "rev";
            break;
        case Skip:
            result += "->";
            break;
        case Draw_2:
            result += "+2";
            break;
    }


    switch (color) {
        case Red:
            result += "Red";
            break;
        case Blue:
            result += "Blue";
            break;
        case Green:
            result += "Green";
            break;
        case Yellow:
            result += "Yellow";
            break;
    }

    return result;


}*/

