#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <sstream>

#include "udemytut1.h"
#include "udemytut2.h"
#include "udemypointerchallenge.h"
#include"mystring.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*vector challenge*/
//        std::vector <int> v1, v2;
//        std::vector <std::vector<int>> v2d;
//        udemytut1 vector_challenge;
//        v1 = vector_challenge.udvectortut1d(10,20); //returns and displays vector 1d
//        v2 = vector_challenge.udvectortut1d(100,200); //returns and displays vector 1d
//        v2d = vector_challenge.udvectortut2d(v1, v2); //returns and displays vector 2d after editing v1

    /*operator challenge*/
//       udemytut2(-20).change_for_cents();

    /*pointer challenge*/
//    int array1[] = {1,-2,1};
//    int array2[] = {4,5,6};
//    size_t array1size {3};
//    size_t array2size {3};
//    udemypointerchallenge arraycreator;
//    int *output{};
//    output = new int[array1size*array2size];
//    output = arraycreator.getnewarray(array1,array1size,array2,array2size);
//    for(size_t j = 0; j < array2size*array1size; j++){
//        std::cout << output[j] << " ";
//    }

    /*operator overload section mystring*/
    MyString empty;
    MyString Nisanth{"Hello Nisanth"};
    MyString Nisanth_Clone{empty};
    std::ostringstream out;
    empty.display(out);
    Nisanth.display(out);
    Nisanth_Clone.display(out);
    std::cout << out.str() << std::endl;

    empty = Nisanth;
    Nisanth_Clone = Nisanth;
    Nisanth = "Test successfull";
    std::ostringstream outtest;
    empty.display(outtest);
    Nisanth.display(outtest);
    Nisanth_Clone.display(outtest);
    std::cout << outtest.str() << std::endl;

    MyString objectfornegation{"HELLO OBJECT FOR NEGATION"};
    MyString negatedobject = -objectfornegation;

    return a.exec();
}


