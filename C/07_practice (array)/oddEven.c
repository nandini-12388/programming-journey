#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d is Even\n", arr[i]);
        }
        else {
            printf("%d is Odd\n", arr[i]);
        }
    }
    return 0;
}