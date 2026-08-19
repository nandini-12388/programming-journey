#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the number of elements for arr1: ");
    scanf("%d", &m);

    printf("Enter the number of elements for arr2: ");
    scanf("%d", &n);

    int arr1[m];
    printf("Enter the elements:\n");
    for(int i=0; i<m; i++) {
        scanf("%d", &arr1[i]);
    }
    int arr2[n];
    printf("Enter the elements:\n");
    for(int j=0; j<n; j++) {
        scanf("%d", &arr2[j]);
    }
    int arr3[m+n];

    //copy arr1 into arr3
    for(int i=0; i<m; i++) {
        arr3[i] = arr1[i];
    }

    //copy arr2 into arr3
    for(int j=0; j<n; j++) {
        arr3[m+j] = arr2[j];
    }

    printf("Merged array: ");
    for(int i=0; i<(m+n); i++) {
        printf("%d ", arr3[i]);
    }
    return 0;
}    