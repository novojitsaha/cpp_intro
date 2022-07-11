#include "Inequalities.hpp"

// Min and Max of two numbers
double Max(double x, double y){
    if (x > y){
        return x;
    }
    else{
        return y;
    }
}

double Min(double x, double y){
    if (x > y){
        return y;
    }
    else{
        return x;
    }
}


// Max and Min of three numbers
double Max(double x, double y, double z) {
    return Max(Max(x,y), z);
}

double Min(double x, double y, double z){
   
   return Min(Min(x,y), z);
}
