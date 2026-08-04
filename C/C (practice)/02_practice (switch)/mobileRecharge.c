#include <stdio.h>

int main() {
    int choice;

    printf("---Mobile Recharge Plan---\n");
    printf("1.Recharge for 199\n");
    printf("2.Recharge for 299\n");
    printf("3.Recharge for 499\n");
    printf("4.Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Recharge successful for 199");
            break;
        case 2:
            printf("Recharge successful for 299");
            break;
        case 3:
            printf("Recharge successful for 499");
            break;
        default:
            printf("Invalid plan");    
    }
    return 0;
}