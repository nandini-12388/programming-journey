//Linear search code using vector.

#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& vec, int target) {

    for(int i=0; i<vec.size(); i++) {
        if(vec[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<int>vec = {1, 3, 5, 7, 9, 2};

    cout << linearSearch(vec, 7) << endl;
    return 0;
}
