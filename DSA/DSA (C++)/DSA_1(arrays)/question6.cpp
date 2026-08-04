// WAF to print all the unique value in an array.
#include <iostream>
using namespace std;

void uniqueValue(int arr[], int sz) {
    bool isUnique;

    for(int i=0; i<sz; i++){
        isUnique = true;
        for(int j=0; j<sz; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }     
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {1, 2, 6, 3, 2, 4, 1, 3};
    int sz = 8;

    uniqueValue(arr, sz);
    return 0;
}