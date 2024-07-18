#include <iostream>

int main() {
    int rows = 5; // Jumlah baris segitiga siku-siku

    // Loop luar untuk setiap baris
    for (int i = 1; i <= rows; i++) {
        int product = 1; // Variabel untuk menyimpan hasil perkalian setiap baris
        // Loop dalam untuk menghitung dan menampilkan bilangan ganjil
        for (int j = 0; j < i; j++) {
            int oddNumber = 2 * j + 1; // Bilangan ganjil ke-j
            product *= oddNumber;      // Mengalikan bilangan ganjil ke dalam product

            std::cout << oddNumber; // Menampilkan bilangan ganjil
            if (j < i - 1) {
                std::cout << " * "; // Menampilkan tanda kali jika bukan elemen terakhir
            }
        }
        std::cout << " = " << product << std::endl; // Menampilkan hasil perkalian
    }

    return 0;
}