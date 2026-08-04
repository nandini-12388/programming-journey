#include <iostream>
using namespace std;

int main() {
    int a = 5 ;
    int b = 4;

    char op;
    cout << "enter operater (+, -, *, /, %): ";
    cin >> op;


    switch (op)
    {
    case '+':
        cout << "sum = " << a + b;
        break;

    case '-':
        cout << "difference = " << a - b;
        break;

    case '*':
        cout << "product = " << a * b;
        break;

    case '/':
        cout << "division = " << a / b;
        break;

    case '%':
        cout << "remainder = " << a / b;
        break;

    default:
        cout << "invalid operator";
    }
    return 0;
}    