#include <stdio.h>

int main(){
  int a,b;
  printf("Masukkan Nilai: ");
  scanf("%d", &a);
  printf("Masukkan Nilai Pembanding: ");
  scanf("%d", &b);
  if (a > b){
    printf("Nilai: %d", a);
    printf(" Lebih besar dari %d", b);
  }else{
    printf("Nilai: %d", b);
    printf(" Lebih besar dari %d", a);
  }
}
