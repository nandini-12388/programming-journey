#include <stdio.h>

int main() {
    int n, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    max = arr[0];
    for(int i=1; i<n; i++) {
        if (arr[i] > arr[0]) {
            max = arr[i];
        }
    }
    printf("%d is the maximum element", max);
    return 0;
}    