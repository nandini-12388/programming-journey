#include <stdio.h>

int main() {
    int n, x = 0, y = 1, z;
    
    printf("Enter your total number of terms: ");
    scanf("%d", &n);
    
    int i = 1;
    while(i <= n) {
        printf("%d ", x);
        z = x + y;
        x = y;
        y = z;
        i++;
    }
    return 0;
}