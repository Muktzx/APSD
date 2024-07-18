#include <iostream>

int main() {
    int sum = 0;    // Variabel untuk menyimpan hasil penjumlahan
    int count = 10; // Jumlah bilangan genap yang ingin dihitung

    // Loop untuk menghitung dan menambahkan 10 bilangan genap pertama
    for (int i = 1; i <= count; i++) {
        int evenNumber = 2 * i; // Mendapatkan bilangan genap ke-i
        sum += evenNumber;      // Menambahkan bilangan genap ke sum
        std::cout << evenNumber; // Menampilkan bilangan genap
        if (i < count) {
            std::cout << " + "; // Menampilkan tanda tambah
        } else {
            std::cout << " = "; // Menampilkan tanda sama dengan
        }
    }

    std::cout << sum << std::endl; // Menampilkan hasil penjumlahan

    return 0;
}