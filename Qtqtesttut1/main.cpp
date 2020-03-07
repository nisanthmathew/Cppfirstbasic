#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
#include "udemytut1.h"
#include "udemytut2.h"
#include "udemypointerchallenge.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*vector challenge*/
    //    std::vector <int> v1, v2;
    //    std::vector <std::vector<int>> v2d;
    //    udemytut1 vector_challenge;
    //    v1 = vector_challenge.udvectortut1d(10,20); //returns and displays vector 1d
    //    v2 = vector_challenge.udvectortut1d(100,200); //returns and displays vector 1d
    //    v2d = vector_challenge.udvectortut2d(v1, v2); //returns and displays vector 2d after editing v1

    /*operator challenge*/

   //   udemytut2(-20).change_for_cents();

    /*pointer challenge*/
    int array1[] = {1,-2,1};
    int array2[] = {4,5,6};
    size_t array1size {3};
    size_t array2size {3};
    udemypointerchallenge arraycreator;
    int *output{};
    output = new int[array1size*array2size];
    output = arraycreator.getnewarray(array1,array1size,array2,array2size);
    for(size_t j = 0; j < array2size*array1size; j++){
        std::cout << output[j] << " ";
    }

    std::cout << std::endl;

    return a.exec();
}


