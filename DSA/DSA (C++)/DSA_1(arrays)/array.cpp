#include <iostream>
using namespace std;

int main() {
    int marks[10] = {99, 100, 54, 36, 88};
    marks[0] = 101;

    double price[] = {98.99, 105.67, 38.00}; //3 (size equivalent to data)

    cout << marks[0] << endl;
    cout << marks[3] << endl;
    return 0;
}