#ifndef UDEMYPOINTERCHALLENGE_H
#define UDEMYPOINTERCHALLENGE_H

#include <QObject>

class udemypointerchallenge: public QObject
{
    Q_OBJECT

private:

public:
    udemypointerchallenge();

    int* getnewarray(const int *array1, const size_t array1size,
                     const int *array2, const size_t array2size);
};

#endif // UDEMYPOINTERCHALLENGE_H
