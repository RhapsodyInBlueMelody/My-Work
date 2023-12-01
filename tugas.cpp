#include <iostream>
using namespace std;

/*Nama :Syeddinul Faiz Canigga
  Kelas:TI23B.1
  NIM  :312310500
*/

int main(){

	const int jumlahNim = 9;
	int arrayNim[jumlahNim] = {0};

	long long nim;
	cout << "Masukkan NIM kamu: ";
	cin >> nim;

	if (nim < 1000000000 && nim >= 0) {
		for (int i=0; i < jumlahNim; ++i){
		arrayNim[i] = nim % 10;
		nim /= 10;
		}


	int min = arrayNim[0];
	for(int i = 1; i < jumlahNim; ++i ) {
		if (arrayNim[i]<min){ min = arrayNim[i];
		}
	}
		cout << "Angka terkecil dari NIM mu adalah: "<< min << endl;
	}else {
		cout << "NIM yang kamu masukkan tidak valid, Program keluar." << endl;
	}
	return 0;
}
