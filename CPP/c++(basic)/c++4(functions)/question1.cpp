#include <iostream>
using namespace std;

// int sum (int n) {
//     int s = n*(n + 1)/2;
//     return s;
// }

// int main() {
//     cout << sum(4) << endl;

//     return 0;
// }

// OR 

int sumN (int n) {
    int sum = 0;

    for(int i=0; i<=n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    cout << sumN(5) << endl;
    cout << sumN(10) << endl;

    return 0;
}
