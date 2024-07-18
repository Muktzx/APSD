#include <iostream>

int main() {
    int rows = 5; // Jumlah baris segitiga siku terbalik
    int totalSum = 0; // Variabel untuk menyimpan total penjumlahan

    // Loop luar untuk setiap baris, mulai dari rows dan berkurang
    for (int i = rows; i > 0; i--) {
        int sum = 0; // Variabel untuk menyimpan hasil penjumlahan setiap baris

        // Loop dalam untuk menghitung dan menampilkan bilangan genap dari besar ke kecil
        for (int j = rows; j >= i; j--) {
            int evenNumber = 2 * j; // Bilangan genap ke-j dari akhir
            sum += evenNumber;      // Menambahkan bilangan genap ke sum

            std::cout << evenNumber; // Menampilkan bilangan genap
            if (j > i) {
                std::cout << " + "; // Menampilkan tanda tambah jika bukan elemen terakhir
            }
        }
        totalSum += sum; // Menambahkan sum ke totalSum
        std::cout << " = " << sum << std::endl; // Menampilkan hasil penjumlahan
    }

    // Menampilkan total penjumlahan
    std::cout << "= " << totalSum << std::endl;

    return 0;
}
