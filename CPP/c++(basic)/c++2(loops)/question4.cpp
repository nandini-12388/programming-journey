// Sum of all numbers from 1 to N which are divisible by 3. 

#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int sum = 0;

    for(int i=1; i<=n; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    cout << "sum: " << sum << endl;
    return 0;
}


int main() {
    int n = 10;
    int i = 1;
    int sum = 0;

    while (i <= n) {
        if (i % 3 == 0) {
            sum += i;
        }
        i++;
    }
    cout << "sum: " << sum << endl;
    return 0;
}