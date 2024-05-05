//program diskon dengan minimal pembelian

#include <stdio.h>

int main (){
	printf("--SELAMAT DATANG DI TOKO MUSLIMAH--\n\n");
	printf("Spesial Lebaran, DISKON 40%% untuk pembelian minimal 150 ribu\n");
	printf("Berikut adalah katalog kami :\n");
	printf("1. Gamis  = Rp 120.000\n");
	printf("2. Blouse = Rp 50.000\n");
	printf("3. Jilbab = Rp 30.000\n");
	printf("4. Rok    = Rp 80.000\n");
	printf("5. Tunik  = Rp 70.000\n");
	
	int i, banyak;
	char item[100];
	int harga, total_harga=0;
	
	printf("Masukkan banyak item yang akan dibeli : ");
	scanf("%d", &banyak);
	
	for (i=1; i<=banyak; i++){
		printf("\nItem ke-%d\n", i);
		printf("Jenis item : ");
		scanf("%s", &item);
		printf("Harga : ");
		scanf("%d", &harga);
		
		total_harga += harga;
	}
	
	printf("\nTotal harga belanjaan Anda adalah : %d\n\n", total_harga);
	
	int diskon;
	if(total_harga >= 150000){
		diskon = total_harga * 40 / 100;
		total_harga -= diskon;
		printf("Selamat, Anda mendapat diskon 40%% (%d)\n", diskon);
		printf("Total harga yang harus Anda bayar adalah : %d\n", total_harga);
	}
	else{
		printf("Total harga yang harus Anda bayar adalah : %d\n", total_harga);
	}
	
	printf("\nTerima Kasih Telah Berbelanja! Selamat Datang Kembali!");
	return 0;
}
