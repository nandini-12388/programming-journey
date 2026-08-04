// sum of all even numbers from 1 to N using for loop.
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int evenSum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum += i;
        }
    }
    cout << "even sum: " << evenSum << endl;
    return 0;
}

// sum of all odd numbers from 1 to N using while loop.

int main() {
    int n = 10;
    int i = 1;
    int oddSum = 0;

    while (i <= n) {
        if (i % 2 != 0) {
            oddSum += i;
        }
        i++;
    }
    cout << "odd sum: " << oddSum << endl;
    return 0;
}