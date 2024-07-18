#include <iostream>

int main() {
    int rows = 5; // Jumlah baris segitiga siku-siku

    // Loop luar untuk setiap baris
    for (int i = 1; i <= rows; i++) {
        int sum = 0; // Variabel untuk menyimpan hasil penjumlahan setiap baris
        // Loop dalam untuk menghitung dan menampilkan bilangan genap
        for (int j = 1; j <= i; j++) {
            int evenNumber = 2 * j; // Bilangan genap ke-j
            sum += evenNumber;      // Menambahkan bilangan genap ke sum

            std::cout << evenNumber; // Menampilkan bilangan genap
            if (j < i) {
                std::cout << " + "; // Menampilkan tanda tambah jika bukan elemen terakhir
            }
        }
        std::cout << " = " << sum << std::endl; // Menampilkan hasil penjumlahan
    }

    return 0;
}