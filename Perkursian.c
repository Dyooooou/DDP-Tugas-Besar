/* main program belum diganti jadi modul
yg harus ada di main program:
printf ("Mau memesan atas nama siapa?\n");
scan f("%s, nama"); 
printf("\Masukkan nomor kursi yang kamu mau.\n");
scanf("%d", &nomor_kursi);
*/

#include <stdio.h>

typedef struct {
    char nama[20];
    int nomor_kursi;
} Reservasi;

Reservasi reservasi[100];
int num_reservasi = 0;

int main () {
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

void reservasi_kursi(char name[], int nomor_kursi) {
	if (num_reservasi >= 100) {
		printf("Maaf, kursi sudah penuh.\n");
	}
	for (int i=0, i<num_reservasi, i++) {
		if (reservasi[i].nomor_kursi == nomor_kursi) {
			printf("Maaf, kursi ini sudah direservasi.\n");
		}
	}
	strcpy(reservasi[num_reservasi].nama, nama);
	reservasi[num_reservasi].nomor_kursi = nomor_kursi;
	num_reservasi++;
	
	printf("Kursi %d sudah dipesan untuk %s. \n", nomor_kursi, nama);
}

