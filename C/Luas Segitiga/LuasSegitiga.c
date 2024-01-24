#include <stdio.h>

int main(){
  int alas,tinggi,luas;
  printf("Masukkan Alas: ");
  scanf("%d", &alas);
  printf("Masukkan Tinggi: ");
  scanf("%d", &tinggi);
  luas = 0.5*alas*tinggi;
  printf("Luas segitiga adalah: %d", luas);
}
