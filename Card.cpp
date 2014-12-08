#include "Card.h"

Card::Card(Color color, Symbol symbol)
    :color(color)
    ,symbol(symbol)
{



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
    QString resultado = "";
    Color color  = getColor();
    Symbol symbol = getSymbol();
    switch (symbol) {
        case Zero:
            resultado += "0";
            break;
        case One:
            resultado += "1";
            break;
        case Two:
            resultado += "2";
            break;
        case Three:
            resultado += "3";
            break;
        case Four:
            resultado += "4";
            break;
        case Five:
            resultado += "5";
            break;
        case Six:
            resultado += "6";
            break;
        case Seven:
            resultado += "7";
            break;
        case Eight:
            resultado += "8";
            break;
        case Nine:
            resultado += "9";
            break;
        case Reverse:
            resultado += "/";
            break;
        case Skip:
            resultado += "->";
            break;
        case Draw_2:
            resultado += "+2";
            break;
    }


    switch (color) {
        case Red:
            resultado += "Red";
            break;
        case Blue:
            resultado += "Red";
            break;
        case Green:
            resultado += "Red";
            break;
        case Yellow:
            resultado += "Red";
            break;
    }

    return resultado;

}

