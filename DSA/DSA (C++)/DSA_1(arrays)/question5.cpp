//WAF to swap the max & min number of an array. 

#include <iostream>
using namespace std;

int swapMinMax(int arr[], int sz) {
    int min_index = 0;
    int max_index = 0;

    for(int i=0; i<sz; i++) {
        if(arr[i] < arr[min_index]) {
            min_index = i;
        } 
        if(arr[i] > arr[max_index]) {
            max_index = i;
        } 
    }
    swap (arr[min_index], arr[max_index]);
}

int main() {
    int arr[] = {2, 5, 7, 9, 3, 8};
    int sz = 6;

    swapMinMax(arr, 6);
    for(int i=0; i<6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}