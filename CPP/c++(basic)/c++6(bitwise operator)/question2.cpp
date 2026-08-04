// WAF to reverse an integer n.

#include <iostream>
using namespace std;


int reverseInt(int num) {
    int ans = 0;

    while(num>0) {
        int rem = num % 10;
        ans = ans * 10 + rem;
        num /=10;
    }
    return ans;
}


int main() {
    int num;
    cout << "Enter your number: ";
    cin >> num;

    cout << reverseInt(num) << endl;
    return 0;
}