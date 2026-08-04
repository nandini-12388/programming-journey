#include <iostream>
using namespace std;

//sum of 2 number
double sum(double a, double b) { //parameters
    double s = a+b ;
    return s;
}

//min of 2 nums
int minOfTwo(int a, int b) { 
    if(a <= b) {
        return a;  
    } else {
        return b;   
    }
}

int main() {
    cout << sum(10.99 , 5.65) << endl;    //arguments
    cout << minOfTwo(10 , 5) << endl;


    return 0;
}