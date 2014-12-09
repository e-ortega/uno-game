#include "MainWindow.h"
#include <QApplication>
#include "Deck.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //Deck deck;
    //deck.print_deck();



    return a.exec();
}
