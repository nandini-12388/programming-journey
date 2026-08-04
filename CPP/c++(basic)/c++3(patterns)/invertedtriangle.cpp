#include <iostream>
using namespace std;

// 1111
//  222
//   33
//    4

int main() {
    int n = 4;

    for (int i=0; i<n; i++) {
        for(int j=0; j<i; j++) { // i times space
            cout <<" ";
        }
        for(int j=0; j<n-i; j++) { //(n-i) nums
            cout << i+1;
        }
        cout << endl;
    }
    return 0;
}

// AAAA
//  BBB
//   CC
//    D

// int main() {
//     int n = 4;
    
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<i; j++) {
//             cout << " ";
//         }
//         for(int j=0; j<n-i; j++) {
//             cout << char('A' + i) ;
//         }
//         cout << endl;
//     }
//     return 0;
// }