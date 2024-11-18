#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100
#define true 1
#define false 0

char username[MAX_LENGTH];
char password[MAX_LENGTH];
char comfirm[MAX_LENGTH];

// membuat sistem sign up dan sign in setelah melakukan sign up
// rules pembuatan password :
// minimal harus memiliki satu huruf
// minimal harus memiliki satu simbol unik
// minimal harus memiliki satu angka
// password minimal harus ada 8 karakter

// mengcopy array a ke b
void copyarray (char a[], char b[]) {
    for(int i = 0; i < a[i] != '\0'; i++){
        b[i] = a[i];
    }
}

// isi username
void isiusername() {
    prinf("enter username : ");
    scanf("%s", username);
}

// cek password minimal 8 karakter
void passkondi1(){
    int count = 0;
    for (int i = 0; confirm[i] != '\0'; i++){
        count++
    }

    if(count >= 8){
        return true;
    }else{
        printf("masukkan password minimal 8 karakter");
        return false;
    }
}

// cek password minimal harus memiliki 1 huruf
void passkondi2(){
    char huruf[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPLKJHGFDSAZXCVBNM";
    for (int i = 0; confirm[i] != '\0'; i++){
        for (int j = 0; confirm[i] != '\0'; j++){
            if(confirm[i] == huruf[j]){
                return true;
            }else{
                printf("password anda tidak memiliki karakter huruf");
                return false;
            }
        }
    }
}

// cek password minimal harus memiliki 1 angka
void passkondi3(){
    char angka[] = "0123456789";
    for (int i = 0; confirm[i] != '\0'; i++){
        for (int j = 0; confirm[j] != '\0'; j++){
            if(confirm[i] == angka[j]){
                return true;
            }else{
                printf("password anda tidak memiliki karakter angka");
                return false;
            }
        }
    }
}

// cek password minimal harus memiliki 1 simbol unik
void passcondi4(){
    char simbolunik[] = "!~`@#$%%^&*()_-+={}[]|;'<,>.?/";
    for (int i = 0; confirm[i] != '\0'; i++){
        for (int j = 0; confirm[j] != '\0';j++){
            if(confirm[i] == simbolunik[j]){
                return true;
            }else{
                printf("password anda tidak memiliki simbol unik");
                return false;
            }
        }
    }
}

