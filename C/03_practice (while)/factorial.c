#include <stdio.h>

int main() {
    int n;
    int i = 1;
    int fact = 1;

    printf("Enter your number: ");
    scanf("%d", &n);

    while(i <= n) {
        fact = fact * i;
        i++;
    }
    printf("Factorial is %d", fact);
    return 0;
}