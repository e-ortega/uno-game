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

void Card::setValue(size_t value)
{
    this->value = value;
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

