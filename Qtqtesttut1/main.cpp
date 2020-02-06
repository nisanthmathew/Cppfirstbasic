#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include "udemytut1.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    std::vector <int> v1, v2;
    std::vector <std::vector<int>> v2d;
    udemytut1 vector_challenge;
    v1 = vector_challenge.udvectortut1d(10,20); //returns and displays vector 1d
    v2 = vector_challenge.udvectortut1d(100,200); //returns and displays vector 1d
    v2d = vector_challenge.udvectortut2d(v1, v2); //returns and displays vector 2d after editing v1

    MainWindow w;
    w.show();
    return a.exec();
}


