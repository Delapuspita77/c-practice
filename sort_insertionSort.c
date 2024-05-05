#include <stdio.h>

void insertionSort(int array[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = array[i]; // Mengambil elemen ke-i dari array
        j = i - 1; // Menyiapkan indeks sebelumnya dari elemen ke-i

        // Memindahkan elemen yang lebih besar dari key ke posisi sebelah kanan
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

int main() {
    int array[] = {45, 23, 4, 12, 9, 22, 39, 8, 11, 19};
    int n = sizeof(array) / sizeof(array[0]); // Jumlah elemen dalam array

    printf("Array sebelum diurutkan: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n\n");

    insertionSort(array, n);

    printf("Array setelah diurutkan: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}
