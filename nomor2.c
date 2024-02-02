#include <stdio.h>
int x (int arr[], int n, int jumlah) {
    printf("Pasangan angka dengan jumlah %d:\n", jumlah);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == jumlah) {
                printf("%d + %d\n", arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int jumlah = 16;

    x(arr, n, jumlah);

    return 0;
}
