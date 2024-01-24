def namaKu():
    print("Nama: Syeddinul Faiz Caniggia")
    print("Kelas: TI23B1")
    print("NIM: 2310500")
    print("=" * 30)

def inputNilaiTugas(a):
    nilai = float(a)
    nilai *= 0.15;
    print("Nilai Tugas adalah: %", nilai)
    return nilai;

def inputNilaiAbsen(a):
    nilai = float(a)
    nilai *= 0.05;
    print("Nilai Absen adalah: %", nilai )
    return nilai;

def inputNilaiUTS(a):
    nilai = float(a)
    nilai *= 0.35;
    print("Nilai UTS adalah: %", nilai)
    return nilai;

def InputNilaiUAS(a):
    nilai = float(a)
    nilai *= 0.45;
    print("Nilai UAS adalah: %", nilai) 
    return nilai;


def operasi():
    namaKu();
    hasil = 0;
    nama = input("Masukkan Nama siswa: ");
    nilaiT = input("Masukkan Nilai Tugas: ");
    nilaiA = input("Masukkan Nilai Absen: ");
    nilaiUTS = input("Masukkan Nilai UTS: ");
    nilaiUAS = input("Masukkan Nilai UAS: ");
    print("=" * 30)
    print("Nilai dari siswa: ", nama)
    hasil += inputNilaiTugas(nilaiT);
    hasil += inputNilaiAbsen(nilaiA);
    hasil += inputNilaiUTS(nilaiUTS);
    hasil += InputNilaiUAS(nilaiUAS);
    print("Total Nilai adalah: %", hasil);


operasi()

