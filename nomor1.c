#include <stdio.h>
int x (int arr[], int n) {
    printf("Duplikat: ");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d, ", arr[i]);
                break; 
            }
        }
    }
}
int main() {
    int arr[] = {20, 10, 20, 3, 6, 7, 8, 10, 3, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    x(arr, n);

    return 0;
}
