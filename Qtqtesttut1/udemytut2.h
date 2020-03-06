#ifndef UDEMYTUT2_H
#define UDEMYTUT2_H

#include <QObject>
#include <iostream>

class udemytut2: public QObject
{
    Q_OBJECT
private:
    int input_cents{0};
public:
    udemytut2(int input_cents);
    bool change_for_cents();
};

#endif // UDEMYTUT2_H
