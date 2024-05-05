#include <stdio.h>
#include <string.h>

struct barang {
    char nama[100];
    char rak[10];
    char lorong[10];
};

// Fungsi Sequential Search
int sequentialsearch(struct barang Barang[], int n, char target[]) {
    int i;
    for (i = 0; i < n; i++) {
        if (strcasecmp(Barang[i].nama, target) == 0) {
            return i;  // Mengembalikan indeks barang yang ditemukan
        }
    }
    return -1;  // Mengembalikan -1 jika barang tidak ditemukan
}

int main() {
    printf("MINIMARKET FIKSI\n");
    printf("-------------------\n");
    printf("Selamat datang di Minimarket Fiksi!\n");
    printf("Kami menyediakan kebutuhan Anda, mulai dari kebutuhan rumah tangga hingga kecantikan!\n");

    struct barang Barang[] = {
        {"Sabun", "Rak A", "Lorong 1"},
        {"Sampo", "Rak A", "Lorong 1"},
        {"Mie instan", "Rak C", "Lorong 2"},
        {"Parfum", "Rak G", "Lorong 4"},
        {"Makanan ringan", "Rak D", "Lorong 2"},
        {"Roti", "Rak D", "Lorong 2"},
        {"Pasta Gigi", "Rak A", "Lorong 1"},
        {"Gula", "Rak C", "Lorong 2"},
        {"Sikat Gigi", "Rak A", "Lorong 1"},
        {"Obat-obatan", "Rak F", "Lorong 3"},
        {"Detergen", "Rak B", "Lorong 1"},
        {"Susu", "Rak F", "Lorong 3"},
        {"Pewangi", "Rak B", "Lorong 1"},
        {"Beras", "Rak C", "Lorong 2"},
        {"Tisu", "Rak E", "Lorong 3"},
        {"Kosmetik", "Rak F", "Lorong 3"},
        {"Deodoran", "Rak G", "Lorong 4"},
        {"Pembalut", "Rak E", "Lorong 3"},
        {"Pembersih lantai", "Rak B", "Lorong 1"},
        {"Sabun cuci piring", "Rak B", "Lorong 1"},
        {"Minyak goreng", "Rak C", "Lorong 2"},
        {"Bumbu dapur", "Rak C", "Lorong 2"},
        {"Kopi", "Rak C", "Lorong 2"},
        {"Coklat", "Rak D", "Lorong 2"},
        {"Pampers", "Rak E", "Lorong 3"},
        {"Sabun cuci muka", "Rak G", "Lorong 4"},
    };

    int n = sizeof(Barang) / sizeof(Barang[0]);
    char target[100];

    printf("Coba masukkan barang yang Anda cari: ");
	scanf(" %[^\n]s", target);
	
    int result = sequentialsearch(Barang, n, target);

    if (result != -1) {
        printf("Barang ditemukan:\n");
        printf("Nama: %s\n", Barang[result].nama);
        printf("Ditempatkan di : %s\n", Barang[result].rak);
        printf("Berada di : %s\n", Barang[result].lorong);
    } else {
        printf("Barang tidak ditemukan di minimarket kami.\n");
    }

    return 0;
}

