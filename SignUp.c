#include <stdio.h>
#include <string.h>
#include <windows.h>
#define File_Path "c:\Users\DELL\Documents\tugasddp\simpan data.txt"

void SignUp();
int cekemail();
int cekpassword();
char email[50];
char password[10];

int main() {
    int pilihan;

    do
    {

    printf("-----------------------------------------------------------\n");
    printf("                       SELAMAT DATANG DI                             \n");
    printf("                       BIOSKOP SUKA SUKA                        \n");
    printf("KETIK 1 : SIGN UP\n");
    printf("KETIK 2 : SIGN IN\n");
    printf("-----------------------------------------------------------\n");
    printf("MASUKKAN PILIHANMU : ");
    scanf("%d", &pilihan);

    switch(pilihan){
        case 1 : SignUp();
        break;
        case 2 : printf("SignIn\n");
        break;
        default : printf("ANGKA YANG ANDA MASUKKAN TIDAK VALID");
        break;
    }
    }while(pilihan != 2);
    return 0;
} 

void SignUp(){
     while(getchar() !='\n');
     cek1:
     printf("MASUKKAN EMAIL ANDA : ");
     fgets(email, sizeof(email), stdin);
     if(cekemail() == 0){
        goto cek1;
     }else{
        cek2:
        printf("MASUKKAN PASSWORD ANDA : ");
        fgets(password, sizeof(password), stdin);
        if(cekpassword() == 0){
            goto cek2;
        }
     }
}

int cekemail(){
    int panjang = strlen(email);

     if(panjang < 12){
        system("cls");
        printf("EMAIL TIDAK BOLEH KURANG DARI 12 HURUF\n");
        return 0;
     }
     int i = 0;
     while(email[i] != '\0'){
        if(email[i] == ' '){
            system("cls");
            printf("EMAIL TIDAK BOLEH ADA SPASI\n");
            return 0;
        }
        i++;
     }
     return 1;
}

int cekpassword(){
    int panjang = strlen(password);

    if(panjang < 8){
        system("cls");
        printf("PASSWORD TIDAK BOLEH KURANG DARI 8 KARAKTER\n");
        return 0;
    }
    int i = 0;
    while(password[i] != '\0'){
        if(password[i] == ' '){
            system("cls");
            printf("PASSWORD TIDAK BOLEH ADA SPASI\n");
            return 0;
        }
        i++;
    }
    return 1;
}