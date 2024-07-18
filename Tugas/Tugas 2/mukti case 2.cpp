#include <iostream>
#include <string>

using namespace std;

float hitung_nilai_akhir(float nilai_keaktifan, float nilai_tugas, float nilai_ujian) {
    float nilai_murni_keaktifan = nilai_keaktifan * 0.20;
    float nilai_murni_tugas = nilai_tugas * 0.50;
    float nilai_murni_ujian = nilai_ujian * 0.30;
    float nilai_akhir = nilai_murni_keaktifan + nilai_murni_tugas + nilai_murni_ujian;
    return nilai_akhir;
}

int main() {
    string nama;
    float nilai_keaktifan, nilai_tugas, nilai_ujian;

    cout << "Program Menghitung Nilai Akhir Siswa" << endl;
    cout << "-----------------------------------" << endl;

    cout << "Masukkan Nama siswa: ";
    getline(cin, nama);

    cout << "Masukkan Nilai Keaktifan: ";
    cin >> nilai_keaktifan;

    cout << "Masukkan Nilai Tugas: ";
    cin >> nilai_tugas;

    cout << "Masukkan Nilai Ujian: ";
    cin >> nilai_ujian;

    float nilai_akhir = hitung_nilai_akhir(nilai_keaktifan, nilai_tugas, nilai_ujian);

    cout << "\nHasil Perhitungan:" << endl;
    cout << "Nama Siswa: " << nama << endl;
    cout << "Nilai Akhir: " << nilai_akhir << endl;

    return 0;
}