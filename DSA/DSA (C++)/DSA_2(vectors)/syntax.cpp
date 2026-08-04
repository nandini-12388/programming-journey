#include <iostream>
#include <vector>
using namespace std;

int main() {
    // vector<int>vec; // sz=0
    // vector<int>vec = {1, 2, 3}; //sz=3
    vector<int>vec(3,0);    //(sz, value at each index)

    cout << vec[2] << endl;  //vec[index]

    return 0;
}