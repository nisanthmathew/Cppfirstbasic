#ifndef UDEMYTUT1_H
#define UDEMYTUT1_H

#include <QObject>
#include <iostream>

class udemytut1: public QObject
{
    Q_OBJECT
public:
    udemytut1();
    std::vector<int> udvectortut1d(int input1, int input2);
    std::vector<std::vector<int>> udvectortut2d(std::vector<int> vinput1,
                                                std::vector<int> vinput2);
};

#endif // UDEMYTUT1_H
