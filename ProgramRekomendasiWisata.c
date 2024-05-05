/*Tugas 6
Membuat program dalam bahasa C yang mengimpplementasikan syntax nested if atau if bersarang
program minimal mengandung 3 if*/

#include <stdio.h>

int main()
{
    int lokasi;
    int jenis;
    int info;

    printf("Halo, saya akan merekomendasikan beberapa tempat liburan untuk Weekend anda!\n");
    printf("----------------------------------------------------------------------------\n");
    printf("Kami berfokus pada destinasi wisata di Indonesia.\n");
    printf("1. Jawa \n");
    printf("2. Luar Jawa \n");
    printf("Tuliskan lokasi wisata yang Anda inginkan : ");
    scanf("%d", &lokasi);

    if (lokasi == 1)
    {
        printf("\nAnda memilih lokasi wisata di Jawa \n");
        printf("Kami memiliki beberapa jenis destinasi wisata. \n");
        printf("1. Edukasi \n");
        printf("2. Religi \n");
        printf("3. Healing \n");
        printf("Tuliskan destinasi wisata yang Anda inginkan : ");
        scanf("%d", &jenis);
        if (jenis == 1)
        {
            printf("\nBerikut beberapa rekomendasi wisata edukasi di Jawa : \n 1. Monumen nasional, Jakarta\n 2. Kampung Inggris, Pare\n 3. Jatim Park 3, Batu\n 4. Candi Borobudur, Jogja\n 5. Candi Prambanan, Jogja\n 6. Museum Fosil Sangiran, Surakarta\n 7. Taman Mini Indonesia Indah, Jakarta\n 8. Gedung Sate, Bandung \n");
            printf("\nApakah anda sudah mendapatkan gambaran untuk weekend Anda? (1sudah/0belum) : ");
            scanf("%d", &info);
            if (info == 1)
            {
                printf("Nice, selamat menikmati weekend Anda!\n");
            }
            else if (info == 0)
            {
                printf("Baiklah, jika Anda kesulitan untuk memutuskan, kami menyediakan top 3 recomended untuk wisata edukasi di luar jawa\n 1. Monumen nasional, Jakarta : HTM IDR 15.000\n 2. Kampung Inggris, Pare : HTM Free\n 3. Taman Mini Indonesia Indah, Jakarta  : HTM IDR 20.000\n");
            }
            else
            {
            	printf("Error");
			}
        }
        else if (jenis == 2)
        {
            printf("\nBerikut beberapa rekomendasi wisata religi di Jawa : \n 1. Makam sunan ampel, Surabaya\n 2. Masjid Tiban Turen, Malang\n 3. Masjid Agung Jawa Tengah, Semarang\n 4. Makam Sunan Kudus, Jawa Tengah\n 5. Masjid Istiqlal, Jakarta\n");
            printf("\nApakah anda sudah mendapatkan gambaran untuk weekend Anda? (1sudah/0belum) : ");
            scanf("%d", &info);
            if (info == 1)
            {
                printf("Nice, selamat menikmati weekend Anda!\n");
            }
            else if (info == 0)
            {
                printf("Baiklah, jika Anda kesulitan untuk memutuskan, kami menyediakan top 3 recomended untuk wisata religi di luar jawa\n 1. Makam Sunan Ampel, Surabaya : HTM IDR Free\n 2. Masjid Tiban Turen, Malang : HTM IDR Free\n 3. Masjid Istiqlal, Jakarta : HTM IDR Free\n");
            }
            else
            {
            	printf("Error");
			}
        }
        else if (jenis == 3)
        {
            printf("\nBerikut beberapa rekomendasi wisata Healing di Jawa : \n 1. Dunia Fantasi (Dufan), Jakarta\n 2. Wisata Kawah Ijen, Banyuwangi\n 3. Taman Nasional Baluran, Situbondo\n 4. Wisata Bahari Lamongan, Lamongan\n 5. Kompleks Malioboro, Jawa Tengah\n 6. Wisata Kota Lama Semarang\n 7. Pantai Parangtritis, Bantul\n 8. Tlaga Sarangan, Magetan\n 9. Green Canyon, Pangandaran\n");
            printf("\nApakah anda sudah mendapatkan gambaran untuk weekend Anda? (1sudah/0belum) : ");
            scanf("%d", &info);
            if (info == 1)
            {
                printf("Nice, selamat menikmati weekend Anda!\n");
            }
            else if (info == 0)
            {
                printf("Baiklah, jika Anda kesulitan untuk memutuskan, kami menyediakan top 3 recomended untuk wisata healing di luar jawa\n 1. Dunia Fantasi, Jakarta : HTM IDR 200.000 - 400.000\n 2. Wisata Kawah Ijen, Banyuwangi : HTM IDR 100.000\n 3. Green Canyon, Pangandaran : HTM IDR 12.500\n");
            }
            else
            {
            	printf("Error");
			}
        }
        else
        {
            printf("Maaf, kami hanya menyediakan tiga jenis kategori wisata.");
        }
    }
    else if (lokasi == 2)
    {
        printf("\nAnda memilih lokasi wisata di Luar Jawa \n");
        printf("Kami memiliki beberapa jenis destinasi wisata. \n");
        printf("1. Edukasi \n");
        printf("2. Religi \n");
        printf("3. Healing \n");
        printf("Tuliskan destinasi wisata yang Anda inginkan : ");
        scanf("%d", &jenis);
        if (jenis == 1) 
		{
        	printf("\nBerikut beberapa rekomendasi wisata edukasi di Luar Jawa : \n 1. Museum Tsunami, Aceh\n 2. Benteng Rotterdam, Makassar\n 3. Garuda Wisnu Kencana, Bali\n 4. Taman Nasional Komodo, NTT\n 5. Museum Negeri Kupang, NTT\n 6. Rumah Pengasingan Bung Karno Ende, Flores\n");
            printf("\nApakah anda sudah mendapatkan gambaran untuk weekend Anda? (1sudah/0belum) : ");
            scanf("%d", &info);
            if (info == 1)
            {
                printf("Nice, selamat menikmati weekend Anda!");
            }
            else if (info == 0)
            {
                printf("Baiklah, jika Anda kesulitan untuk memutuskan, kami menyediakan top 3 recomended untuk wisata edukasi di luar jawa\n 1. Benteng Rotterdam, Makassar : HTM IDR 5.000\n 2. Garuda Wisnu Kencana, Bali : HTM IDR 95.000\n 3. Taman Nasional Komodo, NTT : HTM IDR 5.000 - 150.000\n ");
            }
			else
            {
            	printf("Error");
			}	
		}  
        else if (jenis == 2)
        {
        	printf("\nBerikut beberapa rekomendasi wisata religi di Luar Jawa : \n 1. Pura Mayura, Mataram\n 2. Makam Batu Layar, Lombok\n 3. Masjid Islamic Center, Lombok\n 4. Masjid Baiturrahman, Aceh\n 5. Makam Tuanku Imam Bonjol, Minahasa\n 6. Pulau Metu Debi, Papua\n 7. Pulau Mansinam, Papua\n");
           	printf("\nApakah anda sudah mendapatkan gambaran untuk weekend Anda? (1sudah/0belum) : ");
            scanf("%d", &info);
            if (info == 1)
            {
                printf("Nice, selamat menikmati weekend Anda!");
            }
            else if (info == 0)
            {
                printf("Baiklah, jika Anda kesulitan untuk memutuskan, kami menyediakan top 3 recomended untuk wisata religi di luar jawa\n 1. Pura Mayura, Mataram : HTM IDR 2.500\n 2. Masjid Baiturrahman, Aceh : HTM IDR Free\n 3. Pulau Mansinan, Papua : HTM IDR 100.000");
            }
            else
            {
            	printf("Error");
			}
		}
        else if (jenis == 3) 
        {
        	printf("\nBerikut beberapa rekomendasi wisata Healing di Luar Jawa : \n 1. Nusa Penida, Bali\n 2. Banda Neira, Maluku\n 3. Pantai Kuta, Bali\n 4. Danau Toba, Sumut\n 5. Labuan Bajo, NTT\n 6. Jam Gadang, Bukittinggi\n 7. Jembatan Ampera, Sumsel\n 8. Pasar Terapung, Kalimantan\n 9. Pulau Bunaken, Manado\n 10. Raja Ampat, Papua\n 11. Danau Sentani, Papua\n");
            printf("\nApakah anda sudah mendapatkan gambaran untuk weekend Anda? (1sudah/0belum) : ");
            scanf("%d", &info);
            if (info == 1)
            {
                printf("Nice, selamat menikmati weekend Anda!");
            }
            else if (info == 0)
            {
            printf("Baiklah, jika Anda kesulitan untuk memutuskan, kami menyediakan top 3 recomended untuk wisata healing di luar jawa\n 1. Nusa Penida, Bali : HTM IDR 10.000\n 2. Banda Neira, Maluku : HTM IDR 20.000 - 410.000\n 3. Raja Ampat, Papua : HTM IDR 700.000 - 7.500.000\n");
        	}
			else
            {
            	printf("Error");
			}	
		}  
        else
        {
        	printf("Maaf, kami hanya menyediakan tiga jenis kategori wisata.");
		}     
    }
    else
    {
        printf("Maaf, kami hanya menyediakan rekomendasi wisata di Jawa dan Luar Jawa");
    }
    printf ("\nTerima Kasih!!!");
    return 0;
}
