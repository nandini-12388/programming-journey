// WAF to print intersection of 2 arrays.

#include <iostream>
using namespace std;

void intersectionTwoArray(int arr1[], int arr2[], int sz1, int sz2) {
    bool isCommon;

    for(int i=0; i<sz1; i++) {
        isCommon = false;

        for(int j=0; j<sz2; j++) {
            if(arr1[i] == arr2[j]) {
            isCommon = true;
            break;
        }
    }
        if(isCommon == true) {
        cout << arr1[i] << " ";
        }
    }
}    

int main() {
    int arr1[] = {2, 4, 3, 6, 1, 7, 8};
    int sz1 = 7;
    int arr2[] = {5, 7, 3, 1, 0, 9};
    int sz2 = 6;

    intersectionTwoArray(arr1, arr2, sz1, sz2);
    return 0;

}