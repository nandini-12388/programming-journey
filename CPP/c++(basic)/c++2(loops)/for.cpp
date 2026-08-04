#include <iostream>
using namespace std;

// int main() {
//     int n = 10;

//     for (int i=1 ; i<=n ; i++) {
//         cout << i << " ";
//     }

//     cout << endl;
//     return 0;
// }

// find sum of numbers from 1 to n using for loop.

int main() {
        int n = 10;
        int sum = 0;

        for (int i=1 ; i<=n ; i++) {
            sum += i;
            if(i == 5) {
                break;
            }
    }

    cout <<"sum = " << sum << endl;
    return 0;
}


