/******udemy vector tutorial********/
#include "udemytut1.h"
using namespace std;
udemytut1::udemytut1()
{

}

std::vector<int> udemytut1::udvectortut1d(int input1, int input2){ //create a 1d vector
    std::vector<int> vector_1d;
    vector_1d.push_back(input1);
    vector_1d.push_back(input2);

    std::cout << "vector 1d is " << "\n" << vector_1d.at(0) << " " << vector_1d.at(1) << endl;
    std::cout << "vector 1d size is " << "\n" << vector_1d.size() << endl;

    return vector_1d;
}

std::vector<std::vector<int>> udemytut1::udvectortut2d(std::vector<int> vinput1,
                                                       std::vector<int> vinput2){ //create a 2d vector from 2 1d vector and modify one of the input 1d vectors
    std::vector<std::vector<int>> vector_2d;
    vector_2d.push_back(vinput1);
    vector_2d.push_back(vinput2);
    std::cout << "vector 2d is " << "\n" << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    std::cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    vinput1.at(0) = 1000;

    std::cout << "modified vetcor 1d is " << "\n" << vinput1.at(0) << vinput1.at(1) << endl;
    std::cout << "vector 1d size is " << vinput1.size() << endl;

    std::cout << "vector 2d is " << "\n" << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    std::cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    return vector_2d;
}
