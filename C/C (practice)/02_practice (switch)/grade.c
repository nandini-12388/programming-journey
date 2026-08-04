#include <stdio.h>

int main() {
    int percentage;

    printf("Enter your percentage: ");
    scanf("%d", &percentage);

    switch(percentage/10) {
        case 10:
        case 9:
            printf("Grade A");
            break;
        case 8:    
            printf("Grade B");
            break;
        case 7:
            printf("Grade C");
            break;
        case 6:
            printf("Grade D");
            break;      
        case 5:
            printf("Grade F");
            break;      
        default:
            printf("Invalid percentage"); 
    }
    return 0;
}