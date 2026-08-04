// WAF to check if a number is prime or not.

#include <iostream>
using namespace std;

bool prime (int n) {
    bool isPrime = true;

    for (int i=2; i*i<=n; i++) {
    if (n % i == 0) {
        isPrime = false;
        break;
        }
    }
    return isPrime;
}

int main() {
    if (prime(9)) {
        cout << "prime" << endl;
    } else {
        cout << "not prime" << endl;
    }
    
    return 0;
}