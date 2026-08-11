#include <stdio.h>

int main() {
    int num, digit, original, sum = 0;

    printf("Enter your number: ");
    scanf("%d", &num);

    original = num;
    do{
        digit = num % 10;
        sum = sum + digit * digit * digit;
        num /= 10;
    }while(num > 0);

    if(sum == original)
        printf("%d is an armstrong", original);
    else     
        printf("%d is not an armstrong", original);

    return 0;    
    }