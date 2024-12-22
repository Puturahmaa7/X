/*Diberikan sebuah daftar bilangan [3, 5, 3, 7, 5, 8]. Tugas Anda
adalah menemukan semua bilangan unik dalam daftar tersebut.
Keluaran yang diharapkan: Daftar bilangan unik [7, 8].*/

#include <stdio.h>

int main() {
    int arr[] = {3, 5, 3, 7, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    int isUnique;

    printf("Daftar bilangan unik: ");
    
    // Periksa setiap elemen dalam array
    for (i = 0; i < n; i++) {
        isUnique = 1;  // Asumsikan elemen saat ini unik
        
        // Cek apakah elemen sebelumnya ada yang sama
        for (j = 0; j < n; j++) {
            // Jika ada elemen yang sama, tandai sebagai tidak unik
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        // Jika tetap unik, tampilkan elemen tersebut
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
