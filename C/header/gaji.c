#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int cleanBuffer(){
  int c;
  while ((c = getchar()) != '\n' && c != EOF);
  }


int main(int argc, char *argv[])
{
  int jamLembur;
  long int gajiPoko=1000000, gajiKotor,totalGajiLembur;
  float pajak,gajiBersih;
  char nama[31];
  system("clear");
  printf("Nama Pegawai     :");fgets(nama, sizeof(nama), stdin);cleanBuffer();
  printf("Lama Lebur       :");scanf("%i", &jamLembur);
  totalGajiLembur=(long int)5000*jamLembur;
  gajiKotor=gajiPoko+totalGajiLembur;
  pajak=0.1*gajiKotor;
  gajiBersih=gajiKotor-pajak;
  system("clear");
  printf("Hasil Perhitungan\n");
  printf("Nama Pegawai      :%s\n", nama);
  printf("Gaji Pokok        : Rp. %10ld\n", gajiPoko);
  printf("Lama Lembur       : %d jam\n", jamLembur);
  printf("Total Gaji Lembur : Rp. %10ld\n", totalGajiLembur);
  printf("Gaji Kotor        : Rp. %10ld\n", gajiKotor);
  printf("Pajak (10%%)      : Rp. %10.0f\n", pajak);
  printf("Gaji Bersih       : Rp. %10.0f\n\n", gajiBersih);
  printf("Press Enter to continue....\n");
  getchar();
  

  return 0;
}
