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
    std::vector<int> change_for_cents();
    void DollarExtraction();
};

#endif // UDEMYTUT2_H
