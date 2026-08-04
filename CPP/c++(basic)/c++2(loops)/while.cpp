#include <iostream>
using namespace std;

// int main() {
//     int count = 1;

//     while (count <= 5) {
//         cout << count << " ";
//         count ++;
//     }

//     cout << endl;
//     return 0;
// }


int main() {
    int n = 50;
    int i = 1;

    while (i <= n) {
        cout << i << " ";
        i ++;
    }

    cout << endl;
    return 0;
}

// find sum of numbers from 1 to n using while loop.

int main() {
    int n = 5;
    int i = 1;
    int sum = 0;

    while (i <= n) {
        sum += i;
        i ++;
    }

    cout << "sum : " << sum << endl;
    return 0;
}