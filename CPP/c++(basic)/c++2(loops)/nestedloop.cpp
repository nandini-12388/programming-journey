#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for(int i = 1; i<=n; i++) { //number of lines
        int m = 10;
        for(int j=1; j<=m; j++) { //number of stars in each line
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
