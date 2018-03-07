#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QLabel * p = new QLabel();
    p->setText("Bienvenue");
    p->resize(200,200);
    p->show();

    return a.exec();
}
