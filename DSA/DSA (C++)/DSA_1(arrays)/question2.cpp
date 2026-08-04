//Find largest in array.

#include <iostream>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int largest = INT8_MIN;

    for(int i=0; i<size; i++) {  //min, max
        if(nums[i] > largest) {
            largest = nums[i];
        }
    //OR
     // largest = max(nums[i], largest);
    }

    cout << "largest number is :" << largest << endl;
    return 0; 
}