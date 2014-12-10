#include "MainWindow.h"
#include <QApplication>
#include "Deck.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    Deck deck;
    //deck.build_deck();
    deck.print_deck();


    return 0;
    //return a.exec();
}
