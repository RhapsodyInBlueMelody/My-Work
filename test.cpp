#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(){

char nama[40];
int panjang_nama;

cout<< "Masukkan nama kamu: ";
cin.getline(nama, 40);

panjang_nama = strlen(nama);

if (strlen(nama) <= 40){
// menghitung panjang nama
printf("Nama: %s\n", nama);
printf("Panjang: %d karakter\n", panjang_nama);                                                                                                                                                                                    
}else{                                                                                                                                                                                                                             
        printf("Kapasitas Input berlebih hanya 20 Karakter saja\nProgram Keluar\n");                                                                                                                                               
}                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                   
return 0;                                                                                                                                                                                                                          
}             
