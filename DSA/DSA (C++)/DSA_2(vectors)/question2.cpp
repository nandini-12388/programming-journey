//Reverse code using vector.

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& vec) {
    int start = 0, end = vec.size()-1;
    
    while(start < end) {
        swap(vec[start], vec[end]);
        start ++;
        end --;
    }
}

int main() {
    vector<int>vec = {1, 4, 6, 2, 9, 5, 0, 3};

    reverseArray(vec);
    for(int i=0; i<vec.size(); i++) {
        cout << vec[i] << " ";    
    }
    cout << endl;
    return 0;
}