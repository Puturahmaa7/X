/*Tuliskan algoritma untuk menentukan apakah sebuah bilangan n
adalah bilangan prima. Contoh: Masukan: n = 17 Keluaran:
Prima. Masukan: n = 15 Keluaran: Bukan prima.*/

#include <stdio.h>

int main() {
    int n = 17; // Ubah nilai n untuk pengujian lainnya
    int i, isPrime = 1; // Anggap bilangan prima

    // Cek apakah n lebih besar dari 1
    if (n <= 1) {
        isPrime = 0;
    }

    // Cek pembagi dari 2 hingga akar dari n
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0; // Jika ada pembagi selain 1 dan n, maka bukan prima
            break;
        }
    }

    if (isPrime) {
        printf("%d adalah bilangan prima.\n", n);
    } else {
        printf("%d bukan bilangan prima.\n", n);
    }

    return 0;
}
