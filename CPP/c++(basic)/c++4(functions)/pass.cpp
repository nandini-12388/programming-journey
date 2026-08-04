#include <iostream>
using namespace std;

int sum(int a, int b) {
    a = a + 10; //15
    b = b + 10; //14
    return a+b; //29
}

int main() {
    int a = 5, b = 4;
    cout << sum(a, b) << endl;   //old arguments from main func will be copied and used by sum func.

    cout << a << endl;
    cout << b << endl;

    return 0;
}

//another example
// void changeX (int x) {
//     x = 2*x;
//     cout << "x = " << x << endl;  //10
// }

// int main() {
//     int x = 5;
//     changeX(x);

//     cout << "x = " << x << endl;  //5
//     return 0;
// }