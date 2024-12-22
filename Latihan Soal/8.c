/*Tuliskan algoritma untuk menghitung bilangan Fibonacci ke-n.
Contoh: Masukan: n = 7 Keluaran: F(7) = 13.*/

#include <stdio.h>

int main() {
    int n = 7;  // Ubah n untuk menghitung Fibonacci ke-n lainnya
    int a = 0, b = 1, c, i;

    // Menangani kasus khusus untuk n = 0 atau n = 1
    if (n == 0) {
        printf("F(%d) = %d\n", n, a);
        return 0;
    }
    if (n == 1) {
        printf("F(%d) = %d\n", n, b);
        return 0;
    }

    // Hitung Fibonacci ke-n dengan iterasi
    for (i = 2; i <= n; i++) {
        c = a + b;  // Bilangan Fibonacci selanjutnya
        a = b;      // Geser nilai a
        b = c;      // Geser nilai b
    }

    // Output hasil Fibonacci ke-n
    printf("F(%d) = %d\n", n, b);
    return 0;
}
