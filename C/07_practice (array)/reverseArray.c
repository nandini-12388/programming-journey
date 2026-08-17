#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elments: ");
    scanf("%d", &n);

    int arr[n], rev[n];

    printf("Enter the elments:\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++) {
        rev[i] = arr[n-i-1];
    }
    printf("Revrsed array\n");
    for(int i=0; i<n; i++) {
        printf("%d ", rev[i]);
    }
    return 0;
}