#ifndef UDEMYPOINTERCHALLENGE_H
#define UDEMYPOINTERCHALLENGE_H

#include <QObject>
#include <iostream>

class udemypointerchallenge: public QObject
{
    Q_OBJECT

private:

    int testingdata{10};
    int testingfunctionpointer() //function to test pointer to member function
    {
        std::cout << "test successfull" << std::endl;
        return 0;
    }

public:
//    // declare pointer to member function
//    int (udemypointerchallenge::*memberfunctionptr)() = &udemypointerchallenge::testingfunctionpointer;
//    // declare pointer to data member
//    int udemypointerchallenge::*memberdataptr = &udemypointerchallenge::testingdata;
//    udemypointerchallenge(){}

/************************or***********************************/

    // declare pointer to member function
    int (udemypointerchallenge::*memberfunctionptr)(){nullptr};
    // declare pointer to data member
    int udemypointerchallenge::*memberdataptr{nullptr};
    udemypointerchallenge():memberfunctionptr(&udemypointerchallenge::testingfunctionpointer),
        memberdataptr(&udemypointerchallenge::testingdata){}

    int* getnewarray(const int *array1, const size_t array1size,
                     const int *array2, const size_t array2size);
};

#endif // UDEMYPOINTERCHALLENGE_H
