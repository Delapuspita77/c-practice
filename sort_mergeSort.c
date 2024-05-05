#include <stdio.h>

void merge(int arr[], int kiri, int tengah, int kanan) {
    int i, j, k;
    int n1 = tengah - kiri + 1;
    int n2 = kanan - tengah;

    // Buat array sementara untuk penyimpanan sementara
    int L[n1], R[n2];

    // Salin data ke dua array sementara L[] dan R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[kiri + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[tengah + 1 + j];

    // Gabungkan array sementara ke array utama
    i = 0;
    j = 0;
    k = kiri;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Salin sisa elemen dari L[] jika ada
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Salin sisa elemen dari R[] jika ada
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Rekursif bagi array menjadi dua bagian
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Gabungkan dua bagian yang sudah diurutkan
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {97, 55, 36, 73, 14, 35, 93, 64, 57, 76, 35, 81};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array sebelum diurutkan:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    mergeSort(arr, 0, n - 1);

    printf("Array setelah diurutkan:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
