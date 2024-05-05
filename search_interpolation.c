#include <stdio.h>
#include <conio.h>

// Struktur untuk menyimpan informasi buku
struct Buku {
    int kodeBuku;
    char judulBuku[50];
};

// Fungsi interpolation search untuk mencari buku berdasarkan kode buku
int interpolationSearch(struct Buku buku[], int n, int x) {
    int low = 0;
    int high = n - 1;

    while (low <= high && x >= buku[low].kodeBuku && x <= buku[high].kodeBuku) {
        int pos = low + ((double)(high - low) / (buku[high].kodeBuku - buku[low].kodeBuku)) * (x - buku[low].kodeBuku);

        if (buku[pos].kodeBuku == x) {
            return pos;
        }

        if (buku[pos].kodeBuku < x) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    return -1; // Mengembalikan -1 jika buku tidak ditemukan
}

int main() {
    printf("MINI LIBRARY\n");
    printf("------------\n");
    printf("Tersedia buku dalam 3 kategori\n");
    printf("Fiksi (100-105)\n");
    printf("Legenda (200-205)\n");
    printf("Resep Masakan (300-305)\n\n");

   struct Buku library[] = {
    {100, "Laskar Pelangi || Andrea Hirata"},
    {101, "Negeri 5 Menara || Ahmad Fuadi"},
    {102, "Ronggeng Dukuh Paruk || Ahmad Tohari"},
    {103, "Dilan 1990 || Pidi Baiq"},
    {104, "Hujan || Tere Liye"},
    {105, "Bumi Manusia || Ananta Toer"},

    {200, "Legenda Sangkuriang"},
    {201, "Legenda Banyuwangi"},
    {202, "Malin Kundang"},
    {203, "Timun Mas"},
    {204, "Danau Toba"},
    {205, "Keong Mas"},

    {300, "Resep Makanan Tradisional Indonesia"},
    {301, "Resep Makanan Chinese"},
    {302, "Resep Makanan Korea"},
    {303, "Resep Makanan Jepang"},
    {304, "Resep Makanan India"},
    {305, "Resep Makanan Turki"}
    };


    int n = sizeof(library) / sizeof(library[0]);

    int searchkodeBuku;
    printf("Masukkan kode buku (bilangan bulat) yang ingin dicari: ");
    scanf("%d", &searchkodeBuku);

    int result = interpolationSearch(library, n, searchkodeBuku);

    if (result != -1) {
        printf("Kode buku %d ditemukan\nJudul bukunya adalah: %s\n", searchkodeBuku, library[result].judulBuku);
    } else {
        printf("Kode buku %d tidak ditemukan dalam perpustakaan\n", searchkodeBuku);
    }

    printf("\nPress any key to exit...");
    getch();

    return 0;
}
