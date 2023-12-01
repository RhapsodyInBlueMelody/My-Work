#include <iostream>
using namespace std;



int main(){


	cout<<"Nama : Syeddinul Faiz Caniggia" << endl;
	cout<<"Kelas: TI23B.1" << endl;
	cout<<"NIM  : 312310500" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	int usiaMahasiswa[7]= {21,19,20,22,25,23,19};
	int sum = 0, rataRata;

	for (int i = 0; i < 7; i++){
	sum += usiaMahasiswa[i];
	}
	rataRata = sum / 7;


	cout << "Rata-Rata dari umur mahasiswa tersebut: " << rataRata << endl;

	return 0;
}
