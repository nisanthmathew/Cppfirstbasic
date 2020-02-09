/*conversion rates
1 Dollar = 100 cents
1 quarter = 25 cents
1 dime = 10 cents
1 nickel = 5 cents
1 penny = 1 cent*/


#include "udemytut2.h"
using namespace std;
udemytut2::udemytut2()
{

}

bool udemytut2::change_for_cents(int input_cents){
    int change_conversion_checker {0};
    bool converion_status{false};


    int Dollar{0}, Quarter{0}, Dime{0}, Nickel{0}, Penny{0}; // variable to store the output
    const int Dollar_rate{100}, Quarter_rate{25}, Dime_rate{10}, Nickel_rate{5}, Penny_rate{1};
    int remaining_cents {0};


    //creating change
    if(input_cents/Dollar_rate == 0){
        remaining_cents = input_cents;
        std::cout << "Dollar: " << 0 << endl;
    }
    else{
        remaining_cents= input_cents%Dollar_rate;
        Dollar = input_cents/Dollar_rate;
        std::cout << "Dollar: " << Dollar << endl;
    }


    if(remaining_cents/Quarter_rate == 0){
        std::cout << "Quarter: " << 0 << endl;
    }
    else{
        Quarter = remaining_cents/Quarter_rate;
        remaining_cents = remaining_cents%Quarter_rate;
        std::cout << "Quarter: " << Quarter << endl;
    }


    if(remaining_cents/Dime_rate == 0){
        std::cout << "Dime: " << 0 << endl;
    }
    else{
        Dime = remaining_cents/Dime_rate;
        remaining_cents = remaining_cents%Dime_rate;
        std::cout << "Dime: " << Dime << endl;
    }


    if(remaining_cents/Nickel_rate == 0){
        std::cout << "Nickel: " << 0 << endl;
    }
    else{
        Nickel = remaining_cents/Nickel_rate;
        remaining_cents = remaining_cents%Nickel_rate;
        std::cout << "Nickel: " << Nickel << endl;
    }


    if(remaining_cents/Penny_rate == 0){
        std::cout << "Penny: " << 0 << endl;
    }
    else{
        Penny = remaining_cents;
        remaining_cents = remaining_cents%Penny_rate;
        std::cout << "Penny: " << Penny << endl;
    }

    // checking whether the conversion was correct to return the status boolean
    change_conversion_checker = (Dollar*Dollar_rate)+(Quarter*Quarter_rate)+(Dime*Dime_rate)+
            (Nickel*Nickel_rate)+(Penny*Penny_rate)+remaining_cents;


    if(change_conversion_checker == input_cents){ // returns sucess status
        converion_status = true;
    }
    else {
        converion_status = false;
    }

    return converion_status;
}
