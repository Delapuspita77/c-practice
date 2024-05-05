/*Nama 		: Dela Puspita Lasminingrum
NPM 		: 22081010209
Mata Kuliah : Algoritma dan Pemrograman*/

//program menentukan prodi dari setiap fakultas di UPN 'Veteran' Jawa Timur
#include <stdio.h>
#include <string.h>

int main () {
	//menginisiasi array yang berupa maksimal 7 fakultas, 25 prodi dan 50 karakter
	char fakultas[7][25][50];
	int i, n;
	
	//memasukkan data
	strcpy(fakultas[0][0], " ");
	strcpy(fakultas[0][1], "Fakultas Ekonomi dan Bisnis");
	strcpy(fakultas[1][1], "1. Ekonomi Pembangunan");
	strcpy(fakultas[2][1], "2. Manajemen");
	strcpy(fakultas[3][1], "3. Akuntansi");
	strcpy(fakultas[4][1], "4. Kewirausahaan");
	strcpy(fakultas[0][2], "Fakultas Ilmu Komputer");
	strcpy(fakultas[1][2], "1. Informatika");
	strcpy(fakultas[2][2], "2. Sistem Informasi");
	strcpy(fakultas[3][2], "3. Sains Data");
	strcpy(fakultas[0][3], "Fakultas Teknik");
	strcpy(fakultas[1][3], "1. Teknik Industri");
	strcpy(fakultas[2][3], "2. Teknik Kimia");
	strcpy(fakultas[3][3], "3. Teknologi Pangan");
	strcpy(fakultas[4][3], "4. Teknik Sipil");
	strcpy(fakultas[5][3], "5. Teknik Lingkungan");
	strcpy(fakultas[6][3], "6. Teknik Mesin");
	strcpy(fakultas[7][3], "7. Fisika");
	strcpy(fakultas[0][4], "Fakultas Ilmu Sosial dan Politik");
	strcpy(fakultas[1][4], "1. Administrasi Publik");
	strcpy(fakultas[2][4], "2. Administrasi Bisnis");
	strcpy(fakultas[3][4], "3. Ilmu Komunikasi");
	strcpy(fakultas[4][4], "4. Hubungan Internasional");
	strcpy(fakultas[5][4], "5. Pariwisata");
	strcpy(fakultas[0][5], "Fakultas Arsitektur dan Desain");
	strcpy(fakultas[1][5], "1. Arsitektur");
	strcpy(fakultas[2][5], "2. Desain Komunikasi Visual");
	strcpy(fakultas[3][5], "3. Desain Interior");
	strcpy(fakultas[0][6], "Fakultas Pertanian");
	strcpy(fakultas[1][6], "1. Agroteknologi");
	strcpy(fakultas[2][6], "2. Agrobisnis");
	strcpy(fakultas[0][7], "Fakultas Hukum");
	strcpy(fakultas[1][7], "1. Ilmu Hukum");
	
	printf("Halo, Kami akan memberikan informasi terkait Fakultas dan Prodi di UPN 'Veteran' Jawa Timur");
	printf("\n\nTerdapat 7 Fakultas di UPN 'Veteran' Jawa Timur : \n1. Fakultas Ekonomi dan Bisnis \n2. Fakultas Ilmu Komputer \n3. Fakultas Teknik \n4. Fakultas Ilmu Sosial dan Politik \n5. Fakultas Arsitektur dan Desain \n6. Fakultas Pertanian \n7. Fakultas Hukum\n\n");
	//memberikan tempat user untuk memasukkan kode dari fakultas yang ingin diketahui prodinya
	printf("Masukkan Fakultas yang ingin anda ketahui (1-7) : ");
	scanf("%d", &n);
	
	for(i=0; i<=7; i++)
	{
		printf("%s \n", fakultas[i][n]);
	}
	return 0;	
}
