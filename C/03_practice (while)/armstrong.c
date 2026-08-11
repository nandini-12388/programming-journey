#include <stdio.h>

int main() {
    int num, original, digit, sum = 0;

    printf("Enter your 3-digit number: " );
    scanf("%d", &num);

    original = num;

    while(num>0) {
        digit = num % 10;
        sum = sum + digit*digit*digit;
        num = num/10;
    }
    if(original == sum)
        printf("%d is an armstrong number", original);
    else
        printf("%d is not an armstrong number", original);
        
    return 0;    
}