/*Diberikan sebuah daftar bilangan [2, 4, 3, 7, 5] dan bilangan target
T = 9. Tugas Anda adalah menemukan semua pasangan bilangan
yang jumlahnya sama dengan T. Contoh: Keluaran: Pasangan
(2, 7) dan (4, 5).*/

#include <stdio.h>

int main() {
    int arr[] = {2, 4, 3, 7, 5};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    printf("Pasangan yang jumlahnya sama dengan %d:\n", target);

    // Mencari semua pasangan yang jumlahnya sama dengan target
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
