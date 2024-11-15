#include <stdio.h>

void MenampilkanFilm();
int pilihFilm();
void MenampilkanLokasi();
int pilihLokasi();
void MenampilkanJadwal();
int pilihJadwal();
void konfirmasiPilihan(int PilihanFilm, int PilihanLokasi, int PilihanJadwal);

int main (){
//   printf("Hellooooo TUGAS");
// return 0;
// julian bukan jawa
    int PilihanFilm, PilihanLokasi, PilihanJadwal;
    MenampilkanFilm();
    PilihanFilm = pilihFilm();
    PilihanLokasi = pilihLokasi();
    PilihanJadwal = pilihJadwal():
    konfirmasiPilihan(int PilihanFilm, int PilihanLokasi, int PilihanJadwal);
}

void MenampilkanFilm();

void MenampilkanFilm(){
  printf("Daftar Film yang dapat ditonton /n");
  printf("1. Oshi No Ko");
  printf("2. The Last of Us");
  printf("3. DAYZ GONE");
}