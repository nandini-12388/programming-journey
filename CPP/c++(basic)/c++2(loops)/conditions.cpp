#include <iostream>
using namespace std;

// int main() {
//     int n = -45;
//     if(n >= 0) {
//         cout << "n is positive\n";
//     } else {
//         cout << "n is negative\n";
//     }
//     return 0;
// }


// int main() {
//     int age;
//     cout << "enter your age: ";
//     cin >> age;

//     if(age >= 18) {
//         cout << "You are eligible to vote\n";
//     } else {
//         cout << "You are not eligible to vote\n";
//     }

//     return 0;
// }


int main () {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if(n % 2 == 0) {
        cout << "number is even\n";
        cout << "bye\n";
    } else {
        cout << "number is odd\n";
    }
    return 0;
}