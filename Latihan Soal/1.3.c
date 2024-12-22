/*Diberikan daftar tugas berikut:
[(Tugas 1, 3),(Tugas 2, 1),(Tugas 3, 2)]
Setiap tugas memiliki waktu penyelesaian (dalam jam). Urutkan
tugas berdasarkan waktu penyelesaian (terpendek ke terpanjang).
Tampilkan urutan tugas yang optimal.*/

#include <stdio.h>
#include <string.h>

int main() {
    // Daftar tugas (nama tugas, waktu penyelesaian)
    char *tasks[] = {"Tugas 1", "Tugas 2", "Tugas 3"};
    int times[] = {3, 1, 2};  // Waktu penyelesaian untuk masing-masing tugas
    int n = sizeof(times) / sizeof(times[0]);  // Jumlah tugas
    char *tempTask;  // Variabel sementara untuk pertukaran nama tugas
    int tempTime;  // Variabel sementara untuk pertukaran waktu penyelesaian
    int i, j;

    // Algoritma Bubble Sort untuk mengurutkan tugas berdasarkan waktu penyelesaian
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (times[j] > times[j+1]) {
                // Tukar waktu penyelesaian
                tempTime = times[j];
                times[j] = times[j+1];
                times[j+1] = tempTime;

                // Tukar nama tugas sesuai urutan waktu
                tempTask = tasks[j];
                tasks[j] = tasks[j+1];
                tasks[j+1] = tempTask;
            }
        }
    }

    // Menampilkan urutan tugas yang optimal
    printf("Urutan tugas yang optimal berdasarkan waktu penyelesaian:\n");
    for (i = 0; i < n; i++) {
        printf("%s (Waktu: %d jam)\n", tasks[i], times[i]);
    }

    return 0;
}
