#ifndef FILM_C
#define FILM_C

extern const char* JadwalFilm[2][4];
extern const char* NamaLokasi[2];
extern const char* NamaFilm[2];

void MenampilkanFilm();
void MenampilkanLokasi();
int PilihLokasi();
void MenampilkanJadwal(int Film);
void PilihJadwal(int Film);
void FilmPertama();
void FilmKedua();

#endif
