#include <stdio.h>
#include <string.h>

struct identitas_diri 
{
	char nama [100];
	char ttl [100];
	char gender [100];
	char pekerjaan [100];
	char alamat [100];
	char telp [100];
	char email [100];
	char ktp [100];
	char acara[100];
};

struct paket_wo
{
	int cathering; 
	int dekorasi;
	int makeup;
	int dokumentasi;
	int entertaiment;
	int venue;
};

int main () {

	struct identitas_diri id;
	printf("------------------------------------------- \n");
	printf("SELAMAT DATANG DI FANTASY WEDDING ORGANIZER \n");
	printf("------------------------------------------- \n\n");
	printf("Silakan isi data diri Anda terlebih dahulu! \n");
	strcpy(id.nama, "Nama : " );
	printf(id.nama);
	gets(id.nama);
	strcpy (id.ttl, "Tempat Tanggal Lahir : ");
	printf(id.ttl);
	gets(id.ttl);
	strcpy(id.gender, "Jenis Kelamin : " );
	printf(id.gender);
	gets(id.gender);
	strcpy(id.pekerjaan, "Pekerjaan : ");
	printf(id.pekerjaan);
	gets(id.pekerjaan);
	strcpy(id.alamat, "Alamat : ");
	printf(id.alamat);
	gets(id.alamat);
	strcpy(id.telp, "Nomor Telepon : ");
	printf(id.telp);
	gets(id.telp);
	strcpy(id.email, "Email : ");
	printf(id.email);
	gets(id.email);
	strcpy(id.ktp, "Nomor KTP : ");
	printf(id.ktp);
	gets(id.ktp);
	strcpy(id.acara, "Tanggal Acara Berlangsung : ");
	printf(id.acara);
	gets(id.acara);
	printf("-------------------------------------------- \n\n");
		
	int total_cathering; 
	int cathering = 15000;
	int paket_dekorasi;
	int dekorasi = 20000000;
	int paket_makeup;
	int makeup = 800000;
	int paket_dokumentasi;
	int dokumentasi = 500000;
	int paket_entertaiment;
	int entertaiment = 2000000;
	int paket_venue;
	int venue = 5000000;
	int total_paket_wo;
	
	struct paket_wo pw;
	printf("Silakan Pilih Paket Wedding Organizer Anda! \n");
	printf("Cathering (masukkan jumlah dengan minimal 100) : ");
	scanf("%d", &pw.cathering);
	printf("Dekorasi (luxury(3) / exclusive(2) / premium(1)) : ");
	scanf("%d", &pw.dekorasi);
	printf("Make up + Kostum (luxury(3) / exclusive(2) / premium(1)) : ");
	scanf("%d", &pw.makeup);
	printf("Dokumentasi (yes(1) / no(0)) : ");
	scanf("%d", &pw.dokumentasi);
	printf("Entertaiment (yes(1) / no(0)) : ");
	scanf("%d", &pw.entertaiment);	
	printf("Venue (luxury(3) / exclusive(2) / premium(1)) : ");
	scanf("%d", &pw.venue);
	printf("-------------------------------------------- \n");
	printf("-------------------------------------------- \n\n");
	
	total_cathering = cathering*pw.cathering; 
	paket_dekorasi = dekorasi*pw.dekorasi;
	paket_makeup = makeup*pw.makeup;
	paket_dokumentasi = dokumentasi*pw.dokumentasi;
	paket_entertaiment = entertaiment*pw.entertaiment;
	paket_venue = venue*pw.venue;
	total_paket_wo = total_cathering + paket_dekorasi + paket_makeup + paket_dokumentasi + paket_entertaiment + paket_venue; 
	
	printf("Berikut adalah nota pemesanan anda pada FANTASY WEDDING ORGANIZER \n\n");
	printf("Nama : %s \n", id.nama);
	printf("Tempat Tanggal Lahir : %s \n", id.ttl);
	printf("Jenis Kelamin : %s\n", id.gender);
	printf("Pekerjaan : %s\n", id.pekerjaan );
	printf("Alamat : %s\n", id.alamat);
	printf("Nomor Telepon : %s\n", id.telp);
	printf("Email : %s\n", id.email);
	printf("Nomor KTP : %s\n", id.ktp);
	printf("Tanggal Acara Berlangsung : %s\n", id.acara);
	printf("Total Cathering = %d \n", total_cathering); 
	printf("Paket Dekorasi = %d \n", paket_dekorasi);
	printf("Paket Make Up + Kostum = %d \n", paket_makeup);
	printf("Paket Dokumentasi = %d \n", paket_dokumentasi);
	printf("Paket Entertaiment = %d \n", paket_entertaiment);
	printf("Paket Venue = %d \n", paket_venue);
	printf("Total yang harus dibayar = %d \n\n", total_paket_wo);
	printf("Terima kasih! Silakan Tunggu Konformasi Melalui Email");
	
	return 0;
}




