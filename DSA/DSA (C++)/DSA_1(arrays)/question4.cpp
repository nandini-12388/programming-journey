// WAF to calculate sum & product of all numbers in an array.

#include <iostream>
using namespace std;

int sumArray(int arr[], int sz) {
    int sum = 0;
    for (int i=0; i<sz; i++) {
    sum += arr[i];
    }
    return sum;
}

int productArray(int arr[], int sz) {
    int product = 1;
    for (int i=0; i<sz; i++) {
    product *= arr[i];
    }
    return product;
}

int main() {
    int arr[] = {2, 4, 6, 8, 5};
    int sz = 5;

    cout << "Sum is " << sumArray(arr, 5) << endl;
    cout << "Product is " << productArray(arr, 5) << endl;

    return 0;
}