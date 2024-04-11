#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung nilai akhir
char hitungNilaiAkhir(float nilaiKeaktifan, float nilaiTugas, float nilaiUjian) {
    // Menghitung nilai murni dari masing-masing komponen
    float nilaiMurniKeaktifan = nilaiKeaktifan * 0.2;
    float nilaiMurniTugas = nilaiTugas * 0.3;
    float nilaiMurniUjian = nilaiUjian * 0.5;

    // Menghitung nilai akhir
    float nilaiAkhir = nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;

    // Menentukan grade berdasarkan nilai akhir
    if (nilaiAkhir > 80)
        return 'A';
    else if (nilaiAkhir > 70)
        return 'B';
    else if (nilaiAkhir > 56)
        return 'C';
    else if (nilaiAkhir > 46)
        return 'D';
    else
        return 'E';
}

int main() {
    string namaSiswa;
    float nilaiKeaktifan, nilaiTugas, nilaiUjian;

    // Input data siswa
    cout << "Masukkan nama siswa: ";
    getline(cin, namaSiswa);
    cout << "Masukkan nilai keaktifan: ";
    cin >> nilaiKeaktifan;
    cout << "Masukkan nilai tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan nilai ujian: ";
    cin >> nilaiUjian;

    // Hitung nilai akhir
    char grade = hitungNilaiAkhir(nilaiKeaktifan, nilaiTugas, nilaiUjian);

    // Output hasil
    cout << "Nilai akhir " << namaSiswa << ": " << grade << endl;

    return 0;
}
