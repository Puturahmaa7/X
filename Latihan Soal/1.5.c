/*Diberikan daftar berat badan peserta dalam kilogram:
[50, 60, 55, 70, 65]
Pilih dua orang peserta dengan total berat badan mendekati 120
kg. Jelaskan langkah-langkah algoritma Anda.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Daftar berat badan peserta
    int weights[] = {50, 60, 55, 70, 65};
    int n = sizeof(weights) / sizeof(weights[0]);  // Jumlah peserta
    int target = 120;  // Target total berat badan

    int closestPair[2];  // Pasangan yang total beratnya paling mendekati target
    int closestSum = -1;  // Menyimpan total berat pasangan terdekat
    int minDiff = 9999999;  // Selisih terkecil antara total berat dan target

    // Algoritma brute-force untuk mencari pasangan
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = weights[i] + weights[j];
            int diff = abs(target - sum);  // Selisih antara target dan total berat pasangan

            // Jika selisih lebih kecil dari sebelumnya, simpan pasangan ini
            if (diff < minDiff) {
                minDiff = diff;
                closestSum = sum;
                closestPair[0] = weights[i];
                closestPair[1] = weights[j];
            }
        }
    }

    // Menampilkan hasil
    printf("Pasangan dengan total berat badan mendekati %d kg adalah: [%d, %d] dengan total %d kg\n", 
            target, closestPair[0], closestPair[1], closestSum);

    return 0;
}
