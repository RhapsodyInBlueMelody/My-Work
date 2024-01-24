#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 100


FILE *paper;

void clearBuffer(){
  int c;
  while ((c = getchar())!= '\n' && c != EOF);
}

void makeAFile(){
   paper = fopen("Data/job.txt", "r");
  if(paper==NULL){
    paper = fopen("Data/job.txt", "w");
    printf("New File is created..\n");
  }
  fclose(paper);
};

void writeToDo(char str[]){
  paper = fopen("Data/job.txt", "ab");
  if(paper == NULL){
    makeAFile();
  }else{
    fputs(str, paper);
    fputs("\n", paper);
    printf("Okay, I will save that for you ;)\n");
  }
  fclose(paper);
}

void readTask(){
  paper = fopen("Data/job.txt", "r");
  char c[MAX_LIMIT];
  if(paper == NULL){
  printf("Data is not created... yet\n");
  }else{
  while (fgets(c, MAX_LIMIT, paper) != NULL) {
  printf("%s", c);
    }
  }
  fclose(paper);
}

void die(){
  char arr[MAX_LIMIT];
  paper = fopen("Data/job.txt", "w");
  remove(arr);
  printf("Remove Succefully\n");
  fclose(paper);
}

void displayMenu(){
printf("===============================");
printf("=Please Choose each options:  =\n=(1)Write a Task              =\n =(2)Read Today's Task         =\n=(3)Complete a Task           =\n=(4)Exit                      =\n===============================\n");
printf("Please input the number: ");
}


int main()
{
  system("clear");
char str[MAX_LIMIT];
int a = 0;
displayMenu();
fgets(str, MAX_LIMIT, stdin);
sscanf(str, "%d", &a);
clearBuffer();
switch (a) {
  case 1: 
  LINE1:
  printf("What Task you wanted to do today?: ");
  fgets(str, MAX_LIMIT, stdin);
  writeToDo(str);
  printf("Are you done? (1)Write Another (2)Back to menu (3)Exit: ");
  fgets(str, MAX_LIMIT, stdin);
  sscanf(str, "%d", &a);
  if(a == 1)
  {goto LINE1;}
  else if (a == 2){
    main();
  }else if(a == 3){
    return 0;
  }else{
  printf("invalid options. Exiting.\n");
  };
  break;
  case 2:
  readTask();
  printf("Are you done? (1)Back to menu (2)Exit: ");
  fgets(str, MAX_LIMIT, stdin);
  sscanf(str, "%d", &a);
  if(a == 1)main();
  break;
  case 3:
  die();
  printf("Are you done? (1)Back to menu (2)Exit: ");
  fgets(str, MAX_LIMIT, stdin);
  sscanf(str, "%d", &a);
  if(a == 1)main();
  break;
  case 4:
  system("clear");
  break;
  default:
  main();
}

  return 0;
}
