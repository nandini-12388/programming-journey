#include <iostream>
using namespace std;

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 

int main() {    
    int n = 4;

    for (int i=0; i<n; i++) {
        for(int j=1+i; j>0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// A 
// B A 
// C B A 
// D C B A 

int main() {    
    int n = 4;

    for (int i=0; i<n; i++) {
        for(int j=i; j>=0; j--) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
    return 0;
}