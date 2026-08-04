#include <stdio.h>
int main() {
    int day;

    printf("Enter your day: ");
    scanf("%d", &day);

    switch(day) {
        case 1:
        case 7:
            printf("weekend");
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("weekday");
            break;
        default:
            printf("Error");        
    }
    return 0;
}