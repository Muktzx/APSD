#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung total gaji karyawan
float hitungTotalGaji(int golongan, string pendidikan, int jamKerja) {
    // Gaji pokok per bulan
    float gajiPokok = 300000;

    // Menghitung tunjangan jabatan
    float tunjanganJabatan;
    switch (golongan) {
        case 1:
            tunjanganJabatan = 0.05 * gajiPokok;
            break;
        case 2:
            tunjanganJabatan = 0.1 * gajiPokok;
            break;
        case 3:
            tunjanganJabatan = 0.15 * gajiPokok;
            break;
        default:
            tunjanganJabatan = 0;
            break;
    }

    // Menghitung tunjangan pendidikan
    float tunjanganPendidikan;
    if (pendidikan == "SMA")
        tunjanganPendidikan = 0.025 * gajiPokok;
    else if (pendidikan == "D1")
        tunjanganPendidikan = 0.05 * gajiPokok;
    else if (pendidikan == "D3")
        tunjanganPendidikan = 0.2 * gajiPokok;
    else if (pendidikan == "S1")
        tunjanganPendidikan = 0.3 * gajiPokok;
    else
        tunjanganPendidikan = 0;

    // Menghitung honor lembur
    float honorLembur = 0;
    if (jamKerja > 8)
        honorLembur = (jamKerja - 8) * 3500;

    // Menghitung total gaji
    float totalGaji = gajiPokok + tunjanganJabatan + tunjanganPendidikan + honorLembur;

    return totalGaji;
}

int main() {
    int golongan, jamKerja;
    string pendidikan;

    // Input data karyawan
    cout << "Masukkan golongan karyawan (1/2/3): ";
    cin >> golongan;
    cout << "Masukkan pendidikan karyawan (SMA/D1/D3/S1): ";
    cin >> pendidikan;
    cout << "Masukkan jumlah jam kerja karyawan: ";
    cin >> jamKerja;

    // Hitung total gaji
    float totalGaji = hitungTotalGaji(golongan, pendidikan, jamKerja);

    // Output hasil
    cout << "Total gaji karyawan: Rp. " << totalGaji << endl;

    return 0;
}
