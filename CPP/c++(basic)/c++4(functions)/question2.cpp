#include <iostream>
using namespace std;

int facN (int n) {
    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact *= i;
    } 
    return fact;
}

int main() {

    cout << "factorial = " << facN (4) << endl;
    cout << "factorial = " << facN (5) << endl;

    return 0;
}