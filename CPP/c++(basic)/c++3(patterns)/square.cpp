#include <iostream>
using namespace std;

// with numbers

int main() {
    int n = 4;

    for(int i=1; i<=n; i++) { //outer

        for(int j=1; j<=n; j++) { //inner
            cout << j <<" ";
        }
        cout << endl;
    }
    return 0;
}    

// with stars

int main() {
    int n = 4;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;    
}

// with characters
// 65 -> A  (ascii value)

int main() {
    int n = 4;

    for(int i=0; i<n; i++) { //outer
        char ch = 'A';     
        for(int j=0; j<n; j++) { //inner start => line start
            cout << ch <<" ";
            ch = ch + 1;   //65 + 1 => 66 -> B
        }
        
        cout << endl;
    }
    return 0;

}