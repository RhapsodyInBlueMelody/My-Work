#include <iostream>
#include <conio.h>


using namespace std;

int main() {
	
	int totalkwh, pemak;
	
	
	cout << "                              TAGIHAN PEMBAYARAN LISTRIK						"  << endl;
	cout << "==============================================================================="  << endl;
    cout << "" << endl;
	
	cout << "Masukkan pemakaian KWH = "; cin >> totalkwh;
	
	if(totalkwh < 100) {
		cout << "anda harus membayar = Rp. 100000 " << endl;
	}
	
	else if(totalkwh > 100 and totalkwh <= 500) {
		cout << "Anda harus membayar = Rp. " ; cout << 100000 + 1500 * totalkwh << endl;
	}                                              
	
	else(totalkwh >= 500); {
		cout << "anda harus membayar = Rp. "; cout << 700000 + 2000 * totalkwh << endl;
	}                                             
	
	return 0;
}