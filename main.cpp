#include <iostream>
#include<limits>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*  Nama: Syeddinul Faiz Caniggia
	Kelas: TIB.1
	NIM::312310500
*/


int main(int argc, char** argv) {
	int alas, tinggi;
	float hasil;
	
	 std::cout << R"(
_____/\\\\\\\\\\\\_____/\\\\\\\\\\\_____\\/\______/\\\\\\\\\\\\________
 ___/\\\\\\\\\\\\/____/\\\/////////\\____\//\_____////////\////\_________
  __/\\//______________\/\\_______\//\____\//\_____________\/\\\___________
   _\/\\\\/\\\/\\\\\\___\//\_______\\\\____\//\___________\/\\\_____________
    _\/\\\\\\\\\\\\\/____\////\\\///\/\\____\//\________\/\\\________________
     _\/\//_______________\//\_______\/\\____\//\______\/\\\________________
      _\/\\\_______________\\\\_______\//\____\\\\____\/\\\________________
       _\/\\\_______________\//\_______\//\____\//\__\/\\\________________
        _\///\_______________\//\_______\//\____\//\__\/\\\\\\\\\\\\\___
		)" << '\n';

	std::cout << "Hallo! Perkenalkan,:)" << '\n';
	std::cout << "Nama: Syeddinul Faiz Caniggia " << '\n';
	std::cout << "Kelas: TIB.1" << '\n';
	std::cout << "NIM:: 312310500" << '\n';
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';
	std::cout << "Ayo kita coba hitung luas segitiga" << '\n';
	std::cout << "____________________________________" << '\n';

	while (std::cout << "Masukkan Alas Segitiga= " && !(std::cin >> alas)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Kamu salah input, harus menggunakan angka,ya~ \n";
	}

	while (std::cout << "Masukkan Tinggi Segitiga= " && !(std::cin >> tinggi)) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Kamu salah input, harus menggunakan angka,ya~ \n";
	}

	hasil = 0.5*alas*tinggi;

	std::cout << "__________________________________________" << '\n';
	std::cout << "Jadi Luas dari segitiga tersebut adalah " << hasil << '\n';
	std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << '\n';
	
	return 0;
}
