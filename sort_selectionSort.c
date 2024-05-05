#include <stdio.h>

void selectionSort(int harga[], int n) {
    int i, j, min;
    for (i = 0; i < n-1; i++) {
        min = i;
        for (j = i+1; j < n; j++)
            if (harga[j] < harga[min])
                min = j;
        
        // Menukar elemen terkecil dengan elemen pertama pada iterasi saat ini
        int temp = harga[min];
        harga[min] = harga[i];
        harga[i] = temp;
    }
}

int main() {
    int harga[] = {500, 10000, 7000, 15000, 1500, 2000, 9250, 7500, 6100};
    int n = sizeof(harga) / sizeof(harga[0]);

    printf("Harga barang sebelum diurutkan:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", harga[i]);
    printf("\n\n");

    selectionSort(harga, n);

    printf("Harga barang setelah diurutkan:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", harga[i]);
    printf("\n");

    return 0;
}
