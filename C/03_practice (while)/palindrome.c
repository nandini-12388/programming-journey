#include <stdio.h>

int main() {
    int num, original, reversed = 0;

    printf("Enter your number: ");
    scanf("%d", &num);

    original = num;
    while(num>0) {
        int digit = num % 10;
        
        reversed = reversed * 10 + digit;
        num = num/10;
    }

    if(original == reversed)
    printf("%d is a palindrome", original);
    else
    printf("%d is not a palindrome", original);

    return 0;   
}