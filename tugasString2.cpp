#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(){

const int ukuran = 20;
char namaDepan[ukuran];
char namaBelakang[ukuran];

cout<< "Masukkan nama depankamu: ";
cin.getline(namaDepan, ukuran);

cout<< "Masukkan Nama belakang atau Gelar kamu: ";
cin.getline(namaBelakang, ukuran);



if (strlen(namaDepan) <= ukuran && strlen(namaBelakang) <= ukuran){
strcat(namaDepan, " ");
strcat(namaDepan, namaBelakang);
printf("Nama: %s", namaDepan);
}else{
	printf("Kapasitas Input nama depan dan belakang hanya 20 Karakter saja\nProgram Keluar\n");
}

return 0;
}
