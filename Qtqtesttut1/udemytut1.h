#ifndef UDEMYTUT1_H
#define UDEMYTUT1_H

#include <QObject>
#include <QtTest/QTest>

class udemytut1: public QObject
{
    Q_OBJECT
public:
    udemytut1();

public:
    bool myCondition();

};

#endif // UDEMYTUT1_H
