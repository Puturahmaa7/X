/*Diberikan daftar nilai siswa berikut:
[75, 60, 85, 55, 90, 40]
Pisahkan nilai yang lulus (≥ 60) dan tidak lulus (< 60). Tampilkan
hasilnya dalam dua daftar terpisah.*/

#include <stdio.h>

int main() {
    // Daftar nilai siswa
    int scores[] = {75, 60, 85, 55, 90, 40};
    int n = sizeof(scores) / sizeof(scores[0]);  // Jumlah siswa

    // Array untuk menyimpan nilai yang lulus dan tidak lulus
    int passed[n], failed[n];
    int passedCount = 0, failedCount = 0;

    // Proses pemisahan nilai
    for (int i = 0; i < n; i++) {
        if (scores[i] >= 60) {
            passed[passedCount++] = scores[i];  // Menambahkan ke kelompok lulus
        } else {
            failed[failedCount++] = scores[i];  // Menambahkan ke kelompok tidak lulus
        }
    }

    // Menampilkan hasil
    printf("Nilai yang lulus (>= 60): ");
    for (int i = 0; i < passedCount; i++) {
        printf("%d ", passed[i]);
    }
    printf("\n");

    printf("Nilai yang tidak lulus (< 60): ");
    for (int i = 0; i < failedCount; i++) {
        printf("%d ", failed[i]);
    }
    printf("\n");

    return 0;
}
