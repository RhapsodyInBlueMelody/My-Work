#include <iostream>
using namespace std;



int main(){


	cout<<"Nama : Syeddinul Faiz Caniggia" << endl;
	cout<<"Kelas: TI23B.1" << endl;
	cout<<"NIM  : 312310500" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	int jamMulai, jamSelesai, totalBiaya;
	cout << "Masukkan Jam Mulai: ";
	cin >> jamMulai;
	cout << "Masukkan Jam Selesai: ";
	cin >> jamSelesai;

	if ( jamMulai < jamSelesai) {
		totalBiaya = (jamSelesai-jamMulai)*200000;
	cout << "Total biaya untuk sewa lapangan futsal adalah " << totalBiaya << endl;
	}else{
	 cout << "Maaf Input salah, program keluar" << endl;
	 }


	return 0;
}
