#include "MainWindow.h"
#include <QApplication>
#include "Card.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();

    Card *c1 = new Card(Card::Blue, Card::Six);
    QString test = c1->getCard();
    qDebug() << test;
            //=
            //new Carta(Card::Symbol. , Palo.DIAMANTE);

    return a.exec();
}
