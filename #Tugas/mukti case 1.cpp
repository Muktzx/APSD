#include <iostream>
#include <string>

using namespace std;

float hitung_rata_rata(float nilai_tugas1, float nilai_tugas2, float nilai_tugas3) {
    return (nilai_tugas1 + nilai_tugas2 + nilai_tugas3) / 3;
}

int main() {
    string nama, nim;
    float nilai_tugas1, nilai_tugas2, nilai_tugas3;

    cout << "Program Menghitung Nilai Rata-Rata Siswa" << endl;
    cout << "---------------------------------------" << endl;

    cout << "Masukkan NIM siswa: ";
    getline(cin, nim);

    cout << "Masukkan Nama siswa: ";
    getline(cin, nama);

    cout << "Masukkan Nilai Tugas 1: ";
    cin >> nilai_tugas1;

    cout << "Masukkan Nilai Tugas 2: ";
    cin >> nilai_tugas2;

    cout << "Masukkan Nilai Tugas 3: ";
    cin >> nilai_tugas3;

    float rata_rata = hitung_rata_rata(nilai_tugas1, nilai_tugas2, nilai_tugas3);

    cout << "\nHasil Perhitungan:" << endl;
    cout << "Nama Siswa: " << nama << endl;
    cout << "NIM Siswa: " << nim << endl;
    cout << "Nilai Rata-Rata: " << rata_rata << endl;

    return 0;
}