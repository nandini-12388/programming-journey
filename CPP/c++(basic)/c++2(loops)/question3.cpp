#include <iostream>
using namespace std;

// int main() {
//     int n = 10;
//     for(int i=2; i <= n-1; i++) {
//         if(n%i == 0) {
//             cout << "Non prime number\n";
//             break;
//         } else {
//             cout << "prime number\n";
//             break;
//         }
//     }
//     cout << endl;
//     return 0;
// }


int main() {
    int n = 10;
    bool isPrime = true;

    for(int i=2; i*i <= n; i++) {
        if(n%i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime == true) {
        cout << "prime number\n";
    } else {
        cout << "non prime number\n";
    }
    cout << endl;
    return 0;
}