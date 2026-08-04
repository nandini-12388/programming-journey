#include <iostream>
using namespace std;

int main () {
    int a, b;
    cout << "enter a: ";
    cin >> a;

    cout << "enter b: ";
    cin >> b;

    cout << "Sum : " << (a + b) << endl;
    cout << "Difference : " << (a - b) << endl;
    cout << "Product : " << (a * b) << endl;
    cout << "Division : " << (a / b) << endl;
    cout << "Modulo : " << (a % b) << endl;
    return 0;
}