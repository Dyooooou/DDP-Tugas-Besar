#include<stdio.h>
#include "film.h"

int main(){
    int PilihanFilm;
    MenampilkanFilm();
    printf("Film apa yang ingin anda tonton (1/2): ");
    scanf("%d", &PilihanFilm);
    switch (PilihanFilm){
        case 1:
            FilmPertama();
            MenampilkanLokasi();
            PilihLokasi();
            MenampilkanJadwal(1);
            PilihJadwal(1);
            break;
        case 2:
            FilmKedua();
            MenampilkanLokasi();
            PilihLokasi();
            MenampilkanJadwal(2);
            PilihJadwal(2);
            break;
        default:
            printf("Pilihan tidak valid. Silahkan coba lagi");
            break;
        }

    return 0;
}
