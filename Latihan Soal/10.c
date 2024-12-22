/*Diberikan sebuah string S = ”algoritma”. Tugas Anda:
▶ Hitung jumlah kemunculan setiap karakter dalam string.
Contoh: Keluaran:
▶ a : 2
▶ l : 1
▶ g : 1
▶ o : 1
▶ r : 1
▶ i : 1
▶ t : 1
▶ m : 1*/

#include <stdio.h>
#include <string.h>

int main() {
    char S[] = "algoritma";  // String yang diberikan
    int count[256] = {0};  // Array untuk menghitung kemunculan setiap karakter (ASCII)
    int i;

    // Menghitung jumlah kemunculan karakter
    for (i = 0; S[i] != '\0'; i++) {
        count[S[i]]++;  // Increment count untuk karakter yang ditemukan
    }

    // Menampilkan hasil
    printf("Jumlah kemunculan setiap karakter:\n");
    for (i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", i, count[i]);  // Menampilkan karakter dan jumlah kemunculannya
        }
    }

    return 0;
}
