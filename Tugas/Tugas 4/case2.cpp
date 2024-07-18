#include <iostream>

int main() {
    int sum = 0;    // Variabel untuk menyimpan hasil penjumlahan
    int count = 10; // Jumlah bilangan ganjil yang ingin dihitung

    // Loop untuk menghitung dan menambahkan 10 bilangan ganjil pertama
    for (int i = 0; i < count; i++) {
        int oddNumber = 2 * i + 1; // Mendapatkan bilangan ganjil ke-i
        sum += oddNumber;          // Menambahkan bilangan ganjil ke sum
        std::cout << oddNumber;    // Menampilkan bilangan ganjil
        if (i < count - 1) {
            std::cout << " + "; // Menampilkan tanda tambah
        } else {
            std::cout << " = "; // Menampilkan tanda sama dengan
        }
    }

    std::cout << sum << std::endl; // Menampilkan hasil penjumlahan

    return 0;
}