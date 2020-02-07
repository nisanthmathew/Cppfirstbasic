#ifndef UDEMYTUT2_H
#define UDEMYTUT2_H

#include <QObject>
#include <iostream>

class udemytut2: public QObject
{
    Q_OBJECT
public:
    udemytut2();
    bool change_for_cents(int input_cents);
};

#endif // UDEMYTUT2_H
