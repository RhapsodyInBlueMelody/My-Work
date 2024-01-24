#include <stdio.h>

int main(){
  int a,b,c;
  printf("Masukkan sisi siku-siku (a): ");
  scanf("%d", &a);
  printf("Masukkan sisi siku-siku (b): ");
  scanf("%d", &b);
  c = 0.5 * ((a*a)+(b*b));
  printf("Sisi Miring-nya adalah: %d", c);
}
