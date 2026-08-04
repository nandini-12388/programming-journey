#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int marks[size]; 
    for(int i=0; i<size; i++) {
        cin >> marks[i];    
    }

    //int sz = sizeof(marks)    ---> 20 bytes (4bytes * int size)
    //cout << sizeof(marks) / sizeof(int) << endl;    ---> 5

    //loops : 0 to size-1
    for(int i=0; i<size; i++) {
        cout << marks[i] << endl;
    }
    return 0;
}