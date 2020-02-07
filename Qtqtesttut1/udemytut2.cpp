#include "udemytut2.h"
using namespace std;
udemytut2::udemytut2()
{

}

bool udemytut2::change_for_cents(int input_cents){
    int change_conversion_checker {0};

    /*conversion rates
    1 Dollar = 100 cents
    1 quarter = 25 cents
    1 dime = 10 cents
    1 nickel = 5 cents
    1 penny = 1 cent*/

    int Dollar{0}, Quarter{0}, Dime{0}, Nickel{0}, Penny{0};
    int remaining_cents {0};
    if(input_cents/100 == 0){
        remaining_cents = input_cents;
        std::cout << "Dollar: " << 0 << endl;
    }
    else{
        remaining_cents= input_cents%100;
        Dollar = input_cents/100;
        std::cout << "Dollar: " << Dollar << endl;
    }

    if(remaining_cents/25 == 0){
        std::cout << "Quarter: " << 0 << endl;
    }
    else{
        Quarter = remaining_cents/25;
        remaining_cents = remaining_cents%25;
        std::cout << "Quarter: " << Quarter << endl;
    }
    if(remaining_cents/10 == 0){
        std::cout << "Dime: " << 0 << endl;
    }
    else{
        Dime = remaining_cents/10;
        remaining_cents = remaining_cents%10;
        std::cout << "Dime: " << Dime << endl;
    }
    if(remaining_cents/5 == 0){
        std::cout << "Nickel: " << 0 << endl;
    }
    else{
        Nickel = remaining_cents/5;
        remaining_cents = remaining_cents%5;
        std::cout << "Nickel: " << Nickel << endl;
    }
    if(remaining_cents/1 == 0){
        std::cout << "Penny: " << 0 << endl;
    }
    else{
        Penny = remaining_cents;
        remaining_cents = remaining_cents%1;
        std::cout << "Penny: " << Penny << endl;
    }

    change_conversion_checker = (Dollar*100)+(Quarter*25)+(Dime*10)+
                                (Nickel*5)+(Penny*1)+remaining_cents;
    if(change_conversion_checker == input_cents){
        return true;
    }
    else {
        return false;
    }
}
