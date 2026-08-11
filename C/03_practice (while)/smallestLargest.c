#include <stdio.h>

int main() {
    int num, digit, smallest, largest;
    
    printf("Enter your number: ");
    scanf("%d", &num);
    
    largest = num % 10;
    smallest = num % 10;

    while(num > 0) {
        digit = num % 10;

        if(digit > largest)
            largest = digit;
        
        if(digit < smallest)
            smallest = digit;
            
        num = num/10;    
    }
    printf("Largest digit is %d \n",largest);
    printf("Smallest digit is %d ",smallest);

    return 0;
}