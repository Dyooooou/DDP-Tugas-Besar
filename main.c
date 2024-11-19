#include <stdio.h>

void MenampilkanFilm();
int PilihFilm();
void MenampilkanLokasi();
int PilihLokasi();
void MenampilkanJadwal();
int PilihJadwal();
void konfirmasiPilihan(int PilihanFilm, int PilihanLokasi, int PilihanJadwal);

int main (){
//   printf("Hellooooo TUGAS");
// return 0;
// julian bukan jawa
    int PilihanFilm, PilihanLokasi, PilihanJadwal;
    MenampilkanFilm();
    PilihanFilm = PilihFilm();
    PilihanLokasi = PilihLokasi();
    PilihanJadwal = PilihJadwal():
    konfirmasiPilihan(int PilihanFilm, int PilihanLokasi, int PilihanJadwal);
}

void MenampilkanFilm();

void MenampilkanFilm(){
    printf("Daftar Film yang dapat ditonton /n");
    printf("1. Oshi No Ko");
    printf("2. The Last of Us");
    printf("3. DAYZ GONE");
}

int PilihFilm(){
    int Pilihan;
    printf("pilih no film yang dinginkan: ");
    scanf("%d", &Pilihan);
    return Pilihan;
}

void MenampilkanLokasi(){
  printf("Film ingin di tonton dimana /n");
  printf("1. CGV");
  printf("2. XXI");
}

int PilihLokasi(){
  int Pilihan;
  printf("Pilih tempat untuk menonton: ");
  scanf("%d", &Pilihan);
  return Pilihan;
}
void MenampilkanJadwal(){
  printf("pilih jadwal yang anda inginkan: ");
  printf("1. 9.30");
  printf("2. 12.00");
  printf("3. 15.00");
  printf("4. 18.30");
  printf("5. 22.00");
}