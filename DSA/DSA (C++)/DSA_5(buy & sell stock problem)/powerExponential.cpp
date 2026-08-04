#include <iostream>
#include <vector>
using namespace std;

double powExponential(double x, int n) {

    // Corner cases:
    if(n == 0) return 1.0;
    if(x == 0) return 0.0;
    if(x == 1) return 1.0;
    if(x = -1 && n%2 == 0) return 1.0;
    if(x = -1 && n%2 != 0) return -1.0;
    // without these also the code is correct. 
    
    long binForm = n; 
    if(n < 0) {
        x = 1/x;
        binForm = -binForm;
    }

    double ans = 1;
    while(binForm > 0) {
        if(binForm % 2 == 1) {
        ans *= x;
    }
    x *= x;            // x^2
    binForm /= 2;
    }

    return ans;
}

int main() { 
    cout << powExponential(3 , 5) << endl;
    return 0; 
}