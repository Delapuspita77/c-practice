#include <stdio.h>
#include <string.h>
#include <conio.h>

// Struct untuk merepresentasikan data teman 
struct profil {
    char nama[100];
    int usia;
    char gender;
};

// Fungsi Binary Search untuk mencari teman berdasarkan usia
int binarySearch(struct profil profiles[], int left, int right, int targetusia) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (profiles[mid].usia == targetusia) {
            return mid;  // Mengembalikan indeks teman  yang ditemukan
        }

        if (profiles[mid].usia < targetusia) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;  // Mengembalikan -1 jika teman  tidak ditemukan
}

int main() {
    printf("APLIKASI TEMAN ONLINE\n");
    printf("Untuk remaja di atas 18 tahun\n");
    printf("-----------------------------\n");

    struct profil profiles[] = {
        {"Aluna", 19, 'P'},
        {"Ethan", 20, 'L'},
        {"Nayla", 21, 'P'},
        {"Puspita", 22, 'P'},
        {"Aiden", 23, 'L'},
        {"Elina", 24, 'P'},
        {"Keira", 25, 'P'},
        {"Kenzo", 27, 'L'},
        {"Rayyan", 28, 'L'},
        {"Alya", 29, 'P'},
        {"Zahra", 30, 'P'},
        {"Kian", 32, 'L'},  
    };

    int n = sizeof(profiles) / sizeof(profiles[0]);
    int targetusia;

    printf("Masukkan usia teman  yang ingin dicari: ");
    scanf("%d", &targetusia);

    int result = binarySearch(profiles, 0, n - 1, targetusia);

    if (result != -1) {
        printf("teman  ditemukan:\n");
        printf("Nama: %s\n", profiles[result].nama);
        printf("Usia: %d tahun\n", profiles[result].usia);
        printf("Jenis Kelamin: %c\n", profiles[result].gender);
    } else {
        printf("teman  tidak ditemukan.\n");
    }

    printf("\nPress any key to exit...");
    getch();

    return 0;
}