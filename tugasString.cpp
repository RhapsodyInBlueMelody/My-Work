#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(){

const int ukuran = 40;
char nama[ukuran];
int panjang_nama;

cout<< "Masukkan nama kamu: ";
cin.getline(nama, ukuran);

panjang_nama = strlen(nama);

if (strlen(nama) <= ukuran){
// menghitung panjang nama
printf("Nama: %s\n", nama);
printf("Panjang: %d karakter\n", panjang_nama);
}else{
	printf("Kapasitas Input berlebih hanya 20 Karakter saja\nProgram Keluar\n");
}

return 0;
}
