#include <stdio.h>


int main() {
  int day = 0;
  printf("What number: ");
  scanf("%d", &day);


  switch (day) {
    case 1:
      printf("Today is Sunday");
      break;
    case 2:
      printf("Today is Monday");
      break;
    case 3:
      printf("Today is Thursday");
      break;
    case 4:
      printf("Today is Tuesday");
      break;
      };
}
