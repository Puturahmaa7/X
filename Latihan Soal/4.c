/*Diberikan dua bilangan a dan b. Tentukan pangkat terkecil k
sehingga a^k ≥ b. Contoh: Masukan: a = 2, b = 17 Keluaran:
k = 5.*/

#include <stdio.h>

int main() {
    int a = 2;  // Basis
    int b = 17; // Bilangan pembanding
    int k = 0;  // Pangkat terkecil
    int result = 1; // Nilai sementara a^k, dimulai dari 1 (a^0)

    // Cari k hingga a^k >= b
    while (result < b) {
        result *= a;  // Kalikan hasil sebelumnya dengan a untuk mendapatkan a^k
        k++;          // Increment k
    }

    printf("k = %d\n", k);
    return 0;
}
