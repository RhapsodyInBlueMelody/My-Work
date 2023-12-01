#include<iostream>
using namespace std;


/*Nama: Syeddinul Faiz Caniggia
  Kelas: TI23B.1
  NIM  : 312310500
*/

int main(){
//Bagian atas Diamond
	int space,bintang = 11;
	for (int a = 1, b = 0 ; a<=bintang/2+1; ++a, b = 0){
	  for (space = 1; space <= bintang/2+1-a; ++space){
		cout<< "  ";
	      }

		while(b != 2*a-1) {
		 cout << "\033[1;31m*\033[0m "; // \033[1;31m  \033[0m untuk print text berwarna
		 ++b;
		}
		cout<< "\n";
	}
 // Cetak bagian bawah diamond
    for (int a = 1, b = 0; a <= bintang / 2; ++a, b = 0) {
        for (space = 1; space <= a; ++space) {
            std::cout << "  ";
        }

        while (b != bintang - 2 * a) {
            std::cout << "\033[1;31m*\033[0m "; // \033[1;31m  \033[0m untuk print text berwarna
            ++b;
        }
        std::cout << "\n";
    }

return 0;
}
