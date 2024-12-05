// HEADER PERKURSIAN //

#ifndef PERKURSIAN_H
#define PERKURSIAN_H

typedef struct {
	char nama[20];
    int nomor_kursi;
} Reservasi;

void tampilkan_kursi();
void reservasi_kursi(char nama[], int nomor_kursi);
void perkursian();

#endif

