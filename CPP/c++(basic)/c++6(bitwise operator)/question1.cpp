// Figure out how to find if a number is power of 2 without any loop.

// with loop
#include <iostream>
using namespace std;

bool isPowerOfTwo(int num) {
    if(num<=0)
    return false;

    while(num > 1) {
        if(num % 2 != 0) 
            return false;
        num = num/2;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter your number: ";
    cin >> num;

    if (isPowerOfTwo(num))
        cout << num << " is power of 2 ";
    else
        cout << num << " is not a power of 2 ";

    return 0;
}


//without using loop (using bitwise operator >>)
#include <iostream>
using namespace std;

bool isPowerOfTwo(int num) {
   if(num == 1)
      return true;

   if(num <= 0 || (num & 1))   // if result turns out to be non-negative and even, function is called in next step (use >>).
      return false;            // so condition in "if" is true, it will return false
       
   return isPowerOfTwo(num >> 1);   //divides num by 2 repeatedly, if end result is 1 it is a power of 2.
}

int main() {
   int num;
   cout << "Enter your number: ";
   cin >> num;

   if (isPowerOfTwo(num))
      cout << num << " is a power of 2";
   else
      cout << num << " is not a power of 2";
       
   return 0;   
}

   // bitwise || (OR) -> if any one condition turns out to be true, it is not a power of 2 hence returns false.