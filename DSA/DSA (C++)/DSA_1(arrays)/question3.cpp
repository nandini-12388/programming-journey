//Find index of smallest & largest in array.

#include <iostream>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int min_index = 0;
    int max_index = 0;    

    for(int i=0; i<size; i++) { 
        if(nums[i] < nums[min_index]) {
            min_index = i;
        }
        if(nums[i] > nums[max_index]) {
            max_index = i;
        }

    }

    cout << "Index of smallest number is :" << min_index << endl;
    cout << "Index of largest number is :" <<  max_index << endl;    
    return 0; 
} 