#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung nilai rata-rata//
float hitungRataRata(float nilai1, float nilai2, float nilai3) {
    return (nilai1 + nilai2 + nilai3) / 3;
}

// Fungsi untuk menentukan posisi juara
string tentukanJuara(float nilaiRataRata) {
    if (nilaiRataRata > 80)
        return "Juara I";
    else if (nilaiRataRata > 75)
        return "Juara II";
    else if (nilaiRataRata > 65)
        return "Juara III";
    else
        return "Tidak Juara";
}

int main() {
    string namaSiswa;
    float nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3;

    // Input data siswa
    cout << "Masukkan nama siswa: ";
    getline(cin, namaSiswa);
    cout << "Masukkan nilai pertandingan I: ";
    cin >> nilaiPertandingan1;
    cout << "Masukkan nilai pertandingan II: ";
    cin >> nilaiPertandingan2;
    cout << "Masukkan nilai pertandingan III: ";
    cin >> nilaiPertandingan3;

    // Hitung rata-rata
    float nilaiRataRata = hitungRataRata(nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3);

    // Tentukan posisi juara
    string posisiJuara = tentukanJuara(nilaiRataRata);

    // Output hasil
    cout << "Nilai rata-rata " << namaSiswa << ": " << nilaiRataRata << endl;
    cout << "Posisi Juara: " << posisiJuara << endl;

    return 0;
}
