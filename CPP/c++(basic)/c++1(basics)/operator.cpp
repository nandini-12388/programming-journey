#include <iostream>
using namespace std;

int main() {
    int a = 11 , b = 5;

    int ans =(5/ (double)2);
    cout << ans << endl;
    
    cout << "sum = " << (a + b) << endl;
    cout << "difference = " << (a - b) << endl;
    cout << "product = " << (a * b) << endl;
    cout << "division = " << (a / b) << endl;
    cout << "remainder = " << (a % b) << endl;
    
    cout << "division = " << (5/(double)2) << endl;

    cout << (3 < 5) << endl;   //true -> 1
    cout << !(3 > 5) << endl;   //false -> 0   Not used (false changes to true)
    cout << (3 <= 3) << endl;   //true -> 1
    cout << (3 == 3) << endl;   //true -> 1
    cout << (5 != 5) << endl;   //false -> 0
    cout << ( (3 < 1) || (3 < 5) ) << endl;     // OR used (if one is true then final ans is true)
    cout << ( (3 < 1) && (3 < 5) ) << endl;     // AND used (if both are true then only final ans is true)

    return 0;
}

//UNARY OPERATOR (example)

// int main() {
//     int a = 10;
//     int b = a--;

//     cout << "b :" << b << endl;  // 10
//     cout << "a :" << a << endl;  // 9
//     return 0;
// }