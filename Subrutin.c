/*
Nama 		: Dela Puspita Lasminingrum
NPM			: 22081010209
Mata Kuliah : Algoritma dan Pemrograman (C-081)
Judul Program : Kalkulator IMT*/

#include <stdio.h>

// Fungsi untuk menghitung IMT
void hitungIMT(float *berat, float *tinggi, float *imt) {
    *imt = *berat / ((*tinggi) * (*tinggi));
}

int main() {
	printf("==============\n");
	printf("KALKULATOR IMT\n");
	printf("==============\n\n");
	printf("Hai, disini saya akan memberikan kalkulator sederhana untuk menghitung IMT.\n");
	printf("IMT singkatan dari Indeks Masa Tubuh.\n");
	printf("IMT merupakan salah satu cara untuk mengetahui berat badan ideal dengan menggunakan tinggi badan.\nIMT juga dapat digunakan untuk mengetahui kadar lemak di tubuh seseorang.\n\n");
	
	
    float berat, tinggi, imt;
    
    // Meminta input dari pengguna
    printf("Masukkan berat badan Anda (kg): ");
    scanf("%f", &berat);
    
    printf("Masukkan tinggi badan Anda (cm): ");
    scanf("%f", &tinggi);
    
    // Memanggil fungsi hitungIMT dengan parameter menggunakan call by reference
    tinggi = tinggi/100;
    hitungIMT(&berat, &tinggi, &imt);
    
    // Menampilkan hasil perhitungan IMT
    printf("\nIMT Anda: %.2f\n", imt);
    
    if (imt < 18.5)
    {
    	printf("\nDengan IMT sebesar %.2f, anda dikategorikan mempunyai berat badan di bawah normal.\nUntuk mengatasi hal itu, Anda dapat melakukan beberapa hal untuk meningkatkan berat badan, seperti makan dengan porsi kecil namun sering.\n", imt);
	}
	else if (imt>=18.5 && imt<23)
    {
    	printf("\nDengan IMT sebesar %.2f, anda dikategorikan mempunyai berat badan normal.\nGood Job! Anda dapat mempertahankan gaya hidup sehat Anda", imt);
	}
	else if (imt>=23 && imt<25)
    {
    	printf("\nDengan IMT sebesar %.2f, anda dikategorikan mempunyai berat badan melebihi normal.\nUntuk mengatasi hal itu, Anda dapat melakukan beberapa hal untuk mengurangi berat badan, seperti menjalankan program diet sehat.\n", imt);
	}
	else if (imt > 25)
    {
    	printf("\nDengan IMT sebesar %.2f, anda dikategorikan obesitas.\nDengan berat badan seperti itu, Anda berpotensi terserang beberapa penyakit.\nAnda dapat mengonsultasikan kepada dokter mengenai cara untuk menurunkan berat badan dengan sehat", imt);
    }
	return 0;
}
