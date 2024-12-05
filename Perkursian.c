#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "Perkursian.h"

Reservasi reservasi[100];
int num_reservasi = 0;

void tampilkan_kursi () {
    int brs, klm;
    printf("Pilih kursi yang Anda mau\nX = Kursi sudah terisi\n\n");
    for (brs = 0; brs < 6; brs++) {
        for (klm = 0; klm < 3; klm++) {
            for (int k = 0; k < 5; k++) {
	            int nomor_kursi = brs*3*5+klm*5+k+1;
	            int found = 0;
	            for (int i = 0; i < num_reservasi; i++) {
	                if (reservasi[i].nomor_kursi == nomor_kursi) {
	                    printf(" X%02d", nomor_kursi);
	                    found = 1;
	                    break;
	                }
	            }
	            if (!found) {
	                printf(" 0%02d", nomor_kursi);
	            }
        	}
        	printf("  ");
    	} 
        printf("\n");
    }
    printf("\n");
}

void reservasi_kursi(char nama[], int nomor_kursi) {
	if (num_reservasi >= 100) {
		printf("Maaf, kursi sudah penuh.\n");
	}
	for (int i = 0; i < num_reservasi; i++) {
		if (reservasi[i].nomor_kursi == nomor_kursi) {
			printf("Maaf, kursi ini sudah direservasi.\n");
		}
	}
	strcpy(reservasi[num_reservasi].nama, nama);
	reservasi[num_reservasi].nomor_kursi = nomor_kursi;
	num_reservasi++;
	
	printf("Kursi %d sudah dipesan untuk %s. \n", nomor_kursi, nama);
} 

void perkursian () {
	char nama[20];
	int nomor_kursi;
	
	system("cls");
	tampilkan_kursi();
	printf("\n\nMau memesan atas nama siapa?\n");
	scanf("%s", &nama);
	printf("\nMasukkan nomor kursi yang diinginkan\n");
	scanf("%d", &nomor_kursi);
	reservasi_kursi(nama, nomor_kursi);
	sleep(2);
	printf("\nSebentar lagi kembali ke halaman pemesanan kursi,\nSilahkan mengecek kursi anda\n");
	sleep(4);
	system("cls");
	tampilkan_kursi();
	sleep(5);
} 
