#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Pegawai {
    string nama;
    int jamKerja;
    int honorLembur;
    int totalHonor;
};

int main() {
    int banyakData;
    cout << "Masukkan banyak data pegawai: ";
    cin >> banyakData;

    vector<Pegawai> daftarPegawai(banyakData);

    for (int i = 0; i < banyakData; ++i) {
        cout << "\nData Pegawai ke-" << i + 1 << ":" << endl;
        cout << "Nama Pegawai: ";
        cin.ignore();
        getline(cin, daftarPegawai[i].nama);
        cout << "Jam Kerja: ";
        cin >> daftarPegawai[i].jamKerja;

        // Menghitung honor lembur
        if (daftarPegawai[i].jamKerja > 8) {
            daftarPegawai[i].honorLembur = (daftarPegawai[i].jamKerja - 8) * 5000;
        } else {
            daftarPegawai[i].honorLembur = 0;
        }

        // Menghitung total honor
        daftarPegawai[i].totalHonor = 8 * 5000 + daftarPegawai[i].honorLembur;
    }

    // Menampilkan tabel
    cout << "| No | Nama Pegawai | Jam Kerja | Honor Lembur | Total Honor |\n";
    cout << "|----|--------------|-----------|--------------|-------------|\n";
    for (int i = 0; i < banyakData; ++i) {
        cout << "| " << i + 1 << "  | " << daftarPegawai[i].nama << " ";
        cout << " | " << daftarPegawai[i].jamKerja << "        | " << daftarPegawai[i].honorLembur << "        | ";
        cout << daftarPegawai[i].totalHonor << "        |\n";
    }

    return 0;
}
