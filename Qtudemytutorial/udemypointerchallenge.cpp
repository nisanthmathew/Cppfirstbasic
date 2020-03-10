#include "udemypointerchallenge.h"

udemypointerchallenge::udemypointerchallenge( )
{}

int* udemypointerchallenge::getnewarray(const int *array1, const size_t array1size,
                                        const int *array2, const size_t array2size){
    int *result {};
    result = new int[array1size*array2size];
    size_t resultsize {0};
    for(size_t i = 0; i < array2size; i++){ // creating new array by multiplying array1 and array2
        for(size_t j = 0; j < array1size; j++){
            result[resultsize] = array2[i]*array1[j];
            resultsize++;
        }
    }
    return result; // return pointer on heap
}
