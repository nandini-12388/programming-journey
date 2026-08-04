#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter your operator(+,-,*,/): ");
    scanf(" %c", &op);                         //keep a space before %c

    switch(op) {
        case '+':
            printf("Sum is: %d ", a + b);
            break;
        case '-':
            printf("Difference is: %d ", a - b);
            break;    
        case '*':
            printf("Product is: %d ", a * b);
            break;    
        case '/':
            if(b != 0)
                printf("Quotient is: %d ", a / b);
            else
                printf("Error! Division by zero is not allowed.");
            break;
        default:
            printf("Invalid operator");       
    }
    return 0;
}