#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*  Nama: Syeddinul Faiz Caniggia
	Kelas: TIB.1
	NIM::312310500
*/


int main(int argc, char** argv) {
	int alas, tinggi;
	int hasil;
	
	std::cout << "Hallo! Perkenalkan,:)" << std::endl;
	std::cout << "Nama: Syeddinul Faiz Caniggia " << std::endl;
	std::cout << "Kelas: TIB.1" << std::endl;
	std::cout << "NIM:: 312310500" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "Ayo kita coba hitung luas segitiga" << std::endl;
	std::cout << "____________________________________" << std::endl;
	std::cout << "Masukkan Alas Segitiga= ";
	std::cin >> alas ;
	std::cout << "Masukkan Tinggi Segitiga= ";
	std::cin >> tinggi;
	hasil = 0.5*alas*tinggi;
	
	std::cout << "__________________________________________" << std::endl;
	std::cout << "Jadi Luas dari segitiga tersebut adalah " << hasil << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	
	return 0;
}
