#include <iostream>
using namespace std;

int main() {
    int a = 4, b= 8;
    
    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << (a ^ b) << endl;
    cout << (a << 1) << endl;
    cout << (b << 2) << endl;
    cout << (a >> 1) << endl;
    cout << (b >> 2) << endl;
    return 0;
}