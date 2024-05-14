#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    float nilaiUTS;
    float nilaiUAS;
    float nilaiAkhir;
    char nilaiHuruf;
};

// Fungsi untuk menentukan nilai huruf berdasarkan nilai hasil
char getNilaiHuruf(float nilai) {
    if (nilai >= 80)
        return 'A';
    else if (nilai >= 70)
        return 'B';
    else if (nilai >= 56)
        return 'C';
    else if (nilai >= 47)
        return 'D';
    else
        return 'E';
}

int main() {
    int banyakData;
    cout << "Masukkan banyak data: ";
    cin >> banyakData;

    vector<Mahasiswa> daftarMahasiswa(banyakData);

    for (int i = 0; i < banyakData; ++i) {
        cout << "\nData Mahasiswa ke-" << i + 1 << ":" << endl;
        cout << "Nama Mahasiswa: ";
        cin.ignore();
        getline(cin, daftarMahasiswa[i].nama);
        cout << "Nilai UTS: ";
        cin >> daftarMahasiswa[i].nilaiUTS;
        cout << "Nilai UAS: ";
        cin >> daftarMahasiswa[i].nilaiUAS;

        // Menghitung nilai akhir
        daftarMahasiswa[i].nilaiAkhir = (daftarMahasiswa[i].nilaiUAS * 0.4) + (daftarMahasiswa[i].nilaiUTS * 0.6);
        // Menentukan nilai huruf
        daftarMahasiswa[i].nilaiHuruf = getNilaiHuruf(daftarMahasiswa[i].nilaiAkhir);
    }

    // Menampilkan tabel
    cout << "| No | Nama Mahasiswa | Nilai UTS | Nilai UAS | Nilai Akhir | Nilai Huruf |\n";
    cout << "|----|----------------|-----------|-----------|-------------|-------------|\n";
    for (int i = 0; i < banyakData; ++i) {
        cout << "| " << i + 1 << "  | " << daftarMahasiswa[i].nama << " ";
        cout << " | " << daftarMahasiswa[i].nilaiUTS << "        | " << daftarMahasiswa[i].nilaiUAS << "        | ";
        cout << daftarMahasiswa[i].nilaiAkhir << "        | " << daftarMahasiswa[i].nilaiHuruf << "          |\n";
    }

    return 0;
}
