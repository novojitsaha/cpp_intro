#include <iostream>

using namespace std;


#include "Inequalities.hpp"
#include "Inequalities.cpp"


int main(){
    // prompt the user for input
    double d1, d2;
    cout << "Give the first number: ";
    cin >> d1;
    cout << "Give the second number: ";
    cin >> d2;
    cout << d1 << " " << d2;
    bool isLegalInput = false;
    while (!isLegalInput){
        char input;
        cout << "press a for Min, b Max";
        cin >> input;
        if (input == 'a'){
            isLegalInput = true;
            cout << Min(d1, d2);
        }
        else if (input == 'b'){
            isLegalInput = true;
            cout << Max(d1,d2);
        }
    }


}
