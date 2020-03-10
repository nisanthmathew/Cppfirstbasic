/*conversion rates
1 Dollar = 100 cents
1 quarter = 25 cents
1 dime = 10 cents
1 nickel = 5 cents
1 penny = 1 cent*/


#include "udemytut2.h"
using namespace std;

udemytut2::udemytut2(int inputcents)
{
    if(inputcents < 0){
        std::cout << "please enter a positive value" << endl;
        input_cents = 0;
    }
    else{
    input_cents = inputcents;
    }
}

std::vector<int> udemytut2::change_for_cents(){
    std::vector<int> change {0,0,0,0,0};

    int Dollar{0}, Quarter{0}, Dime{0}, Nickel{0}, Penny{0}; // variable to store the output
    const int Dollar_rate{100}, Quarter_rate{25}, Dime_rate{10}, Nickel_rate{5}, Penny_rate{1};
    int remaining_cents {0};


    //creating change
    if(input_cents/Dollar_rate == 0){
        remaining_cents = input_cents;
        change.at(0) = 0;
        std::cout << "Dollar: " << 0 << endl;
    }
    else{
        remaining_cents= input_cents%Dollar_rate;
        Dollar = input_cents/Dollar_rate;
        change.at(0) = Dollar;
        std::cout << "Dollar: " << Dollar << endl;
    }


    if(remaining_cents/Quarter_rate == 0){
        change.at(1) = 0;
        std::cout << "Quarter: " << 0 << endl;
    }
    else{
        Quarter = remaining_cents/Quarter_rate;
        remaining_cents = remaining_cents%Quarter_rate;
        change.at(1) = Quarter;
        std::cout << "Quarter: " << Quarter << endl;
    }


    if(remaining_cents/Dime_rate == 0){
        change.at(2) = 0;
        std::cout << "Dime: " << 0 << endl;
    }
    else{
        Dime = remaining_cents/Dime_rate;
        remaining_cents = remaining_cents%Dime_rate;
        change.at(2) = Dime;
        std::cout << "Dime: " << Dime << endl;
    }


    if(remaining_cents/Nickel_rate == 0){
        change.at(3) = 0;
        std::cout << "Nickel: " << 0 << endl;
    }
    else{
        Nickel = remaining_cents/Nickel_rate;
        remaining_cents = remaining_cents%Nickel_rate;
        change.at(3) = Nickel;
        std::cout << "Nickel: " << Nickel << endl;
    }


    if(remaining_cents/Penny_rate == 0){
        change.at(4) = 0;
        std::cout << "Penny: " << 0 << endl;
    }
    else{
        Penny = remaining_cents;
        remaining_cents = remaining_cents%Penny_rate;
        change.at(4) = Penny;
        std::cout << "Penny: " << Penny << endl;
    }

    return change;
}
