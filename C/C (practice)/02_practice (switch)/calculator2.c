#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter your operator(+,-,*,/): ");
    scanf(" %c", &op);                         //keep a space before %c as it does not whitespace unlike %d

    switch(op) {
        case '+':
            printf("Sum is: %.2f ", a + b);   // %.2f -> limits the output to 2 decimal places, just for better formatting
            break;
        case '-':
            printf("Difference is: %.2f ", a - b);
            break;    
        case '*':
            printf("Product is: %.2f ", a * b);
            break;    
        case '/':
            if(b != 0)
                printf("Quotient is: %.2f ", a / b);
            else
                printf("Error! Division by zero is not allowed.");
            break;
        default:
            printf("Invalid operator");       
    }
    return 0;
}