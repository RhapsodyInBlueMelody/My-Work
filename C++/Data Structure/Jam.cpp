#include <stdio.h>
#include <iostream>

class tipeJam
{
  public:
    void setWaktu(int jam, int menit, int detik); 
    /*Fungsi untuk menetapkan waktu 
     *Waktu ditetapkan sesuai dengan parameter-parameter
     *Postkondisi: jm = jam; men = menit; det = detikFunsi ini memeriksa apakah nilai dari jam,
     *menit, dan detik valid atau tidak. Juka nilainya tak-valid,
     *maka nilai default 0 ditugaskan
     */  
     
    void getWaktu(int& jam, int& menit, int& detik) const;
    /*Fungsi untuk menghasilkan nilai balik berupa waktu
     * Postkonidis: jam = jm; menit = men; detik = det
     */

    void tampilWaktu() const;
    /*Fungsi untuk menampilkan waktu
     * Postkondisi: waktu ditampilkan dalam format jm:men:det.
     */

    void inkremenDetik();
    /*fungsi untuk menginkremen waktu dalam detik
     * Postkonidisi: waktu diinkremen sebesar satu detik.
     * jika waktu sebelum-inkremen adalah 23:59:59, maka ia 
     * akan ditetapkan-ulang menjai 00:00:00.
     *    
    */

    void inkremenMenit();
    /*Fungsi untuk menginkremen waktu dalam menit
     * Postkonidisi: waktu diinkremen sebesar satu menit.
     * Jika waktu sebelum-inkremen adalah 23:45:53, maka ia 
     * akan ditetapkan-ulang menjadi 00:00:53.
     */  

    void inkremenJam();
    /*Fungsi untuk menginkremen waktu dalam jam
     * Postkonidisi: waktu diinkremen sebesar satu jam.
     * Jika waktu sebelum-inkremen adalah 23:45:53, maka ia 
     * akan ditetapkan-ulang menjadi 00:45:53.
     */ 

    bool samaWaktu(const tipeJam& jamLain) const;
    /*Funsi untuk membandingkan dua waktu
     * Postkonidisi: menghasilkan true juka waktu ini sama dengan
     * jamLain; sebaliknya, menghasilkan false
     */ 

  private:
    int jm; //menyimpan jam
    int men; //menyimpan menit 
    int det; //menyimpan detik 
};

void tipeJam::setWaktu(3, 20, 30);

int main(){
  printf("%b \n", tipeJam);
}
