#include <iostream>

using namespace std;

#include "GeneralSum.hpp"
#include "GeneralSum.cpp"

int main(){
    


        int x, y;
        cout << "Enter first integer";
        cin >> x;

        cout << "Enter second integer";
        cin >> y;

        cout << getSum<int>(x,y);

}