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

        int terKecil;
        for (int i = 0; i < jumlahNim ; ++i) {
            for (int j = i + 1; j < jumlahNim; ++j) {
                if (arrayNim[i] > arrayNim[j]) {
                    terKecil = arrayNim[i];         //menggunakan algoritma BubbleSort
                    arrayNim[i] = arrayNim[j];
                    arrayNim[j] = terKecil;
                }
            }
        }
        cout << "Deret NIM kamu dari yang terkecil adalah: ";
        for (int i = 0; i < jumlahNim; ++i){
            cout << arrayNim[i] << " ";
        }
        cout << endl;
	}else {
		cout << "NIM yang kamu masukkan tidak valid, Program keluar." << endl;
	}
	return 0;
}
