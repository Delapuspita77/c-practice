/*Nama 			: Dela Puspita Lasminingrum
NPM 			: 22081010209
Mata Kuliah 	: Algoritma dan Pemrograman (C-081)*/

//program menentukan sabun cuci muka sesuai budget
#include <stdio.h>
#include <stdio.h>

int main () {
	//menginisiasi array nama-nama item dan harganya (total 13 dengan maksimal 50 karakter)
    char item[13][50] = {"Wardah Facial Wash", "Ponds Facial Wash", "Emina Facial Wash", "Skintific Facial Wash", 
	"Bioaqua Facial Wash", "Garnier Facial Wash", "Cosrex Facial Wash", "Biore Facial Wash", "Acnes Facial Wash", 
	"Scarlett Facial Wash", "You Facial Wash", "WhiteLab Facial Wash", "Kahf Facial Wash"}; 
    int hargaitem[13] = {25000, 35000, 22000, 98000, 18000, 23000, 89000, 22000, 39000, 75000, 41000, 61000, 37000};
	
	//menginisiasi iterator budget maksimal dan nomor urut setelah hasilnya muncul
    int i, budget, no_urut;
    no_urut = 1;
    
    printf("Halo, disini saya akan memberikan rekomendasi facial wash sesuai budget yang anda inginkan!\n");
    printf("-------------------------------------------------------------------------------------------\n");
    //memberikan tempat untuk user agar dapat menginputkan budget mereka
    printf("Masukkan budget Anda : ");
    scanf("%d", &budget);
    
    
    printf("Yang bisa anda beli adalah : \n");
    //memberikan fungsi untuk melakukan perulangan untuk memilih item sesuai budget dari seluruh item yang telah disediakan
    for(i=0; i<13; i++){ 
        if(hargaitem[i] <= budget){
            printf("%d. %s\t\t Rp %d\n", no_urut, item[i], hargaitem[i]);
            no_urut++;
        }
    }
    return 0;
}
