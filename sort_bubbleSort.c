#include <stdio.h>

void bubbleSort(int nilai[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (nilai[j] > nilai[j+1]) {
                int temp = nilai[j];
                nilai[j] = nilai[j+1];
                nilai[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {60, 90, 95, 75, 100, 50, 80, 100, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Nilai sebelum diurutkan: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n\n");

    bubbleSort(arr, n);

    printf("Nilai setelah diurutkan: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
