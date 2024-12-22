/*Diberikan daftar bilangan [8, 3, 7, 4, 9] dan elemen target x = 7.
Tugas Anda:
▶ Temukan posisi x dalam daftar menggunakan pencarian linier.
▶ Hitung jumlah langkah pencarian.*/

#include <stdio.h>

int main() {
    int arr[] = {8, 3, 7, 4, 9};
    int target = 7;
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    int langkah = 0;

    // Pencarian linier
    for (i = 0; i < n; i++) {
        langkah++;
        if (arr[i] == target) {
            printf("Elemen %d ditemukan pada posisi %d\n", target, i);
            printf("Jumlah langkah pencarian: %d\n", langkah);
            return 0;
        }
    }

    printf("Elemen %d tidak ditemukan\n", target);
    printf("Jumlah langkah pencarian: %d\n", langkah);

    return 0;
}
