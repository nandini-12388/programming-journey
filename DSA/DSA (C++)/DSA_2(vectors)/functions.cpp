#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>vec;

    cout << "size = " << vec.size() << endl; // sz=0

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    
    cout << "after push_back size = " << vec.size() << endl; 
    
    vec.pop_back(); //45

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(0) << endl;

    // for(int val : vec) {
    //     cout << val << endl;
    // }     

    return 0;
}