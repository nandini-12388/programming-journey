#include <iostream>
using namespace std;

// 1 2 3
// 4 5 6
// 7 8 9

int main () {
    int n = 3;
    int num = 1;

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << num <<" ";
            num ++;
        }
        cout<< endl;
    }

    cout << "after pattern: " << num << endl; // 10
    return 0;
}

// A B C
// D E F
// G H I

int main() {
    int n = 3;
    char ch = 'A';

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << ch << " ";
            ch += 1;
        }
        cout<< endl;
    }
    cout << "after pattern: " << ch << endl; //j
    return 0;
}