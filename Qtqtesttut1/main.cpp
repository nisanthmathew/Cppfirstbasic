#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <sstream>

#include "udemytut1.h"
#include "udemytut2.h"
#include "udemypointerchallenge.h"
#include "mystring.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    udemypointerchallenge test; //testing pointer to member function
    int status = (test.*test.memberfunctionptr)();
    std::cout << "returned function status: " << status << std::endl;

    int data = test.*test.memberdataptr;
    std::cout << "returned data value: " << data << std::endl;

    return a.exec();
}


