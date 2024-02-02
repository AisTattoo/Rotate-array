#include <stdio.h>

int rotateArray(int angka[], int panjang, int k) {
    k = k % panjang;
    int temp[panjang];
    for (int i = 0; i < k; i++) {
        temp[i] = angka[panjang - k + i];
    }
    for (int i = 0; i < panjang - k; i++) {
        temp[k + i] = angka[i];
    }
    for (int i = 0; i < panjang; i++) {
        angka[i] = temp[i];
    }
}
int printArray(int angka[], int panjang) {
    for (int i = 0; i < panjang; i++) {
        printf("%d ", angka[i]);
    }
    printf("\n");
}
int main() {
    int angka[] = {1, 2, 3, 4, 5, 6, 7};
    int panjang = sizeof(angka) / sizeof(angka[0]);
    int k = 3;
    rotateArray(angka, panjang, k);
    printArray(angka, panjang);
    
    return 0;
}
