#include <stdio.h>

int main() {
    int n, x=0, y=1, z;

    printf("Enter your max. limit: ");
    scanf("%d", &n);

    int i = 1;
    do{
        printf("%d ", x);
        z = x + y;
        x = y;
        y = z;
        i++;
    }while(i <= n);

    return 0;
}