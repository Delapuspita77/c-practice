#include <stdio.h>

int main () 
{
	//program menghitung harga jual suatu produk untuk mendapatkan keuntungan sesuai keinginan.
	double BiayaProduksi, BiayaOperasional, PersentaseKeuntungan, TotalBiayaProduksi, HargaJual, JumlahPcs, HargaJualPerPcs;
	
	printf("Biaya Produksi (dalam rupiah) :"); //biaya produksi berupa biaya bahan baku, biaya tenaga kerja, biaya transportasi, dan biaya lain-lain.
	scanf("%lf", &BiayaProduksi);
	printf("Biaya Operasional (dalam rupiah) : "); //biaya operasional berupa biaya sewa tempat, biaya listrik, biaya internet, dan biaya lain-lain.
	scanf("%lf", &BiayaOperasional);
	printf("Persentase Keuntungan yang Anda inginkan (dalam persen) : ");
	scanf("%lf", &PersentaseKeuntungan);
	
	TotalBiayaProduksi = BiayaProduksi + BiayaOperasional;
	HargaJual = TotalBiayaProduksi + (TotalBiayaProduksi * (PersentaseKeuntungan/100));
	
	printf("Harga jual : %lf \n\n", HargaJual);
	
	printf("Menentukan harga jual per pcs \n");
	printf("Jumlah Pcs (dalam satuan) = ");
	scanf("%lf", &JumlahPcs);
	
	HargaJualPerPcs = HargaJual / JumlahPcs;
	
	printf("Harga jual per pcs = %lf", HargaJualPerPcs);
	return 0;
}
