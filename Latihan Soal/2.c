/* Diberikan sebuah daftar bilangan [5, 2, 9, 4, 7]. Tugas Anda:
1. Urutkan bilangan-bilangan tersebut dalam urutan tidak
menurun (non-decreasing).
2. Hitung jumlah langkah perbandingan yang dilakukan.
Gunakan algoritma pengurutan sederhana seperti Insertion Sort. */

#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int comparisonCount = 0;
    int i, j, key;

    // Algoritma Insertion Sort
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Bandingkan key dengan elemen-elemen sebelumnya
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
            comparisonCount++;  // Tambah perbandingan
        }
        arr[j + 1] = key;

        // Jika tidak ada perbandingan yang terjadi dalam langkah ini
        if (j >= 0) {
            comparisonCount++;  // Perbandingan terakhir yang tidak memenuhi kondisi
        }
    }

    // Menampilkan hasil
    printf("Array setelah diurutkan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nJumlah perbandingan: %d\n", comparisonCount);

    return 0;
}
