/*Anda memiliki berat barang berikut:
[2, 3, 5, 8, 1]
dan kapasitas maksimal kantong adalah 10. Kelompokkan barang
ke dalam jumlah kantong seminimal mungkin. Contoh Keluaran:
Kantong 1: [8, 2], Kantong 2: [5, 3, 1].*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Daftar berat barang
    int weights[] = {2, 3, 5, 8, 1};
    int n = sizeof(weights) / sizeof(weights[0]);  // Jumlah barang
    int capacity = 10;  // Kapasitas maksimal kantong

    // Array untuk menyimpan barang yang dimasukkan ke kantong
    int bags[100][n];  // Asumsi maksimal ada 100 kantong
    int bagCount = 0;  // Jumlah kantong yang digunakan

    // Array untuk menyimpan total berat di setiap kantong
    int bagWeight[100] = {0};

    // Algoritma greedy untuk mengelompokkan barang
    for (int i = 0; i < n; i++) {
        int item = weights[i];
        int placed = 0;

        // Coba memasukkan barang ke kantong yang ada
        for (int j = 0; j < bagCount; j++) {
            if (bagWeight[j] + item <= capacity) {
                bags[j][bagWeight[j]] = item;
                bagWeight[j] += item;
                placed = 1;
                break;
            }
        }

        // Jika barang belum ditempatkan, buat kantong baru
        if (!placed) {
            bags[bagCount][0] = item;
            bagWeight[bagCount] = item;
            bagCount++;
        }
    }

    // Menampilkan hasil
    printf("Jumlah kantong yang digunakan: %d\n", bagCount);
    for (int i = 0; i < bagCount; i++) {
        printf("Kantong %d: [", i + 1);
        for (int j = 0; j < n; j++) {
            if (bags[i][j] != 0) {
                printf("%d", bags[i][j]);
                if (j < n - 1) printf(", ");
            }
        }
        printf("]\n");
    }

    return 0;
}
