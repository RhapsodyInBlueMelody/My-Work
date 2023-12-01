#include <iostream>
#include <stdio.h>
using namespace std;

double jarak(int jp,int skala){
	int jarakSebenarnya = jp * skala;
	return jarakSebenarnya;
}

void nama(){
	printf("Nama: Syeddinul Faiz Caniggia\n");
	printf("Kelas: TI21B1\n");
	printf("NIM: 312310500\n");
}

int konversi(int km){
	int totalJarak = km / 100000;
	return totalJarak;
}

int main() {
	
	int jp = 4;
	int skala1 = 1;
	int skala2 = 1200000;
	int skala = skala1 * skala2;
	int jarakAktual = jarak(jp, skala);
	
	nama();
	printf("=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=~=\n");

	cout << "Jarak Pada Peta= " << jp << " cm" << endl;
	cout << "Skala Peta= " << skala1 << ":" << skala2 << endl;
	cout << "Jarak Sebenarnya adalah: " << jarakAktual << endl;
	cout << "Atau dalam Kilometer: " << konversi(jarakAktual) << "Km" << endl;
	return 0;
}
