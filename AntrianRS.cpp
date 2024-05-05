#include <iostream>
#include <cstring>
#include <ctime>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

#define MAX_QUEUE_SIZE 10
#define MAX_ARCHIVE_SIZE 1000

struct Pasien
{
  int id;
  char name[30];
  char timeGetQueue[10];
  char timeExitQueue[10];
};

typedef struct Pasien Pasien;

int idCount = 1;
Pasien queue[MAX_QUEUE_SIZE];
int queueCount = 0;
Pasien archive[MAX_ARCHIVE_SIZE];
int archiveCount = 0;

// Tambah antrian
void enQueue()
{
  if (queueCount >= MAX_QUEUE_SIZE)
  {
    cout << "Antrian penuh\n";
    return;
  }

  // get time
  time_t rawtime;
  struct tm *timeinfo;
  time(&rawtime);
  timeinfo = localtime(&rawtime);
  char currentTime[20];
  strftime(currentTime, sizeof(currentTime), "%H:%M:%S", timeinfo);

  char name[50];
  cout << "Masukkan nama: ";
  scanf(" %49[^\n]", name);

  queue[queueCount].id = idCount;
  strcpy(queue[queueCount].name, name);
  strcpy(queue[queueCount].timeGetQueue, currentTime);

  idCount++;
  queueCount++;
  cout << "Antrian berhasil ditambahkan\n";
}

// Geser antrian
void deQueue()
{
  if (queueCount == 0)
  {
    cout << "Antrian kosong\n";
    return;
  }

  // get time
  time_t rawtime;
  struct tm *timeinfo;
  time(&rawtime);
  timeinfo = localtime(&rawtime);
  char currentTime[20];
  strftime(currentTime, sizeof(currentTime), "%H:%M:%S", timeinfo);

  archive[archiveCount].id = queue[0].id;
  strcpy(archive[archiveCount].name, queue[0].name);
  strcpy(archive[archiveCount].timeGetQueue, queue[0].timeGetQueue);
  strcpy(archive[archiveCount].timeExitQueue, currentTime);

  // Geser antrian
  for (int i = 0; i < queueCount - 1; i++)
  {
    queue[i] = queue[i + 1];
  }

  queueCount--;
  archiveCount++;
  cout << "Pasien terdepan telah keluar dari antrian\n";
}

// Menampilkan antrian
void showQueue()
{
  if (queueCount == 0)
  {
    cout << "Antrian kosong\n";
    return;
  }

  cout << "Antrian\n";
  cout << setw(5) << "No" << setw(15) << "No. Antrian" << setw(35) << "Nama" << setw(25) << "Ambil Antrian" << endl;

  for (int i = 0; i < queueCount; i++)
  {
    cout << setw(5) << i + 1 << setw(15) << queue[i].id << setw(35) << queue[i].name << setw(25) << queue[i].timeGetQueue << endl;
  }
}

// Menampilkan riwayat
void showData()
{
  if (archiveCount == 0)
  {
    cout << "Riwayat kosong\n";
    return;
  }

  cout << "Riwayat\n";
  cout << setw(15) << "No. Antrian" << setw(35) << "Nama" << setw(25) << "Ambil Antrian" << setw(25) << "Tiba Giliran" << endl;

  for (int i = 0; i < archiveCount; i++)
  {
    cout << setw(15) << archive[i].id << setw(35) << archive[i].name << setw(25) << archive[i].timeGetQueue << setw(25) << archive[i].timeExitQueue << endl;
  }
}

// Mencari data berdasarkan ID
void findByID(Pasien arr[])
{
  bool found = false;

  int id;
  cout << "Cari No. Antrian: ";
  cin >> id;

  cout << endl
       << "Hasil Pencarian Berdasarkan ID: " << id << endl;
  cout << setw(15) << "No. Antrian" << setw(35) << "Nama" << setw(25) << "Ambil Antrian" << setw(25) << "Tiba Giliran" << endl;

  for (int i = 0; i < idCount; i++)
  {
    if (arr[i].id == id)
    {
      found = true;
      cout << setw(15) << arr[i].id << setw(35) << arr[i].name << setw(25) << arr[i].timeGetQueue << setw(25) << arr[i].timeExitQueue << endl;
      break;
    }
  }

  if (!found)
  {
    cout << "Data tidak ditemukan untuk ID: " << id << endl;
  }
}

// Membersihkan antrian saat keluar program
void clearQueue()
{
  while (queueCount != 0)
  {
    deQueue();
  }
}

// Simpan riwayat ke file txt
void saveToFile()
{
  ofstream file("archive_data.txt", ios::app);

  if (!file.is_open())
  {
    cout << "Gagal membuka file" << endl;
    return;
  }

  // get time
  time_t rawtime;
  struct tm *timeinfo;
  char currentDate[80];

  time(&rawtime);
  timeinfo = localtime(&rawtime);
  strftime(currentDate, sizeof(currentDate), "%Y-%m-%d", timeinfo);

  file << "Tanggal: " << currentDate << endl;
  file << setw(15) << "No. Antrian" << setw(35) << "Nama" << setw(25) << "Ambil Antrian" << setw(25) << "Tiba Giliran" << endl;
  for (int i = 0; i < archiveCount; i++)
  {
    file << setw(15) << archive[i].id << setw(35) << archive[i].name << setw(25) << archive[i].timeGetQueue << setw(25) << archive[i].timeExitQueue << endl;
  }
  file << endl;

  file.close();
  cout << "Data berhasil disimpan ke dalam file archive_data.txt" << endl;
}

int main()
{
  char pilih;

  do
  {
    system("cls");
    cout << "1. Tambah Antrian\n";
    cout << "2. Geser Antrian\n";
    cout << "3. Cari No. Antrian di antrian\n";
    cout << "4. Cari No. Antrian di riwayat\n";
    cout << "A. Tampilkan Antrian\n";
    cout << "Z. Tampilkan Riwayat\n";
    cout << "X. Keluar\n";
    cout << "MENU: ";
    cin >> pilih;
    cout << "\n";

    switch (pilih)
    {
    case '1':
      enQueue();
      getch();
      break;
    case '2':
      deQueue();
      getch();
      break;
    case '3':
      findByID(queue);
      getch();
      break;
    case '4':
      findByID(archive);
      getch();
      break;
    case 'a':
    case 'A':
      showQueue();
      getch();
      break;
    case 'z':
    case 'Z':
      showData();
      getch();
      break;
    case 'x':
    case 'X':
      clearQueue();
      break;
    default:
      cout << "Pilihan salah\n";
      break;
    }
  } while (pilih != 'x' && pilih != 'X');

  saveToFile();

  return 0;
}
