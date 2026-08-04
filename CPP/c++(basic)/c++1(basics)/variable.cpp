#include<iostream>
using namespace std;

int main() {
    int age = 25;
    char grade = 'A';
    float PI = 3.14f;
    bool isSafe = false;

    int value = grade;       // char to int conversion (in its ascii form)(Type casting)
    cout << value <<endl;

    double price = 100.99;
    int newPrice = price;    
    cout << newPrice << endl;    // Output: 100

    cout << isSafe <<endl;  //true -> 1 & false -> 0
    cout << age << endl;
    cout << sizeof(age) << endl;
    cout << grade << endl;
    cout << PI << endl;
    return 0;
}


// conversion (small data type to bigger data type) IMPLICIT
// casting (big {byte size} data type to small data type) EXPLICIT