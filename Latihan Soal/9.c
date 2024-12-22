/*Diberikan sebuah daftar bilangan [4, 5, 4, 6, 5, 6, 7]. Tugas Anda
adalah menghapus semua elemen ganda sehingga hanya tersisa
satu elemen unik. Keluaran: [4, 5, 6, 7].*/

#include <stdio.h>

int main() {
    int arr[] = {4, 5, 4, 6, 5, 6, 7};  // Daftar bilangan
    int n = sizeof(arr) / sizeof(arr[0]);  // Ukuran array
    int result[n];  // Array untuk menyimpan elemen unik
    int resultSize = 0;  // Ukuran array hasil

    // Mencari elemen unik
    for (int i = 0; i < n; i++) {
        int isUnique = 1;  // Asumsikan elemen ini unik
        
        // Cek apakah elemen sudah ada di array hasil
        for (int j = 0; j < resultSize; j++) {
            if (arr[i] == result[j]) {
                isUnique = 0;  // Jika ada, tandai sebagai tidak unik
                break;
            }
        }

        // Jika elemen unik, tambahkan ke array hasil
        if (isUnique) {
            result[resultSize] = arr[i];
            resultSize++;
        }
    }

    // Tampilkan array hasil
    printf("Daftar bilangan unik: [");
    for (int i = 0; i < resultSize; i++) {
        printf("%d", result[i]);
        if (i < resultSize - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
