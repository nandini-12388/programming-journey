#include <iostream>
#include <vector>
using namespace std; 

int maxWater(vector<int> &height) {
    int maxWater = 0;
    int width, ht, currWater;
    int n = height.size();

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            width = j - i;
            ht = min(height[j], height[i]);
            currWater = width * ht;

            maxWater = max(maxWater, currWater);
        }
    }
    return maxWater;
}

int main() {
    vector<int>height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "Maximum water stored is " << maxWater(height) << endl;
    return 0;
}