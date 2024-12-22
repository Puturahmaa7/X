/*Diberikan daftar nama mahasiswa berikut:
[Andi, Budi, Citra, Dani, Eka]
Susun nama-nama tersebut dalam urutan alfabetis menggunakan
algoritma Bubble Sort. Tampilkan hasil akhir dan jelaskan
langkah-langkah algoritma Anda*/

#include <stdio.h>
#include <string.h>

int main() {
    // Daftar nama mahasiswa
    char *names[] = {"Andi", "Budi", "Citra", "Dani", "Eka"};
    int n = sizeof(names) / sizeof(names[0]);  // Jumlah elemen dalam array
    char *temp;  // Variabel sementara untuk pertukaran nama
    int i, j;

    // Algoritma Bubble Sort untuk mengurutkan nama dalam urutan alfabetis
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            // Membandingkan dua nama berturut-turut
            if (strcmp(names[j], names[j+1]) > 0) {
                // Jika nama[j] lebih besar (secara alfabet), tukar posisi
                temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }

    // Menampilkan hasil akhir
    printf("Nama mahasiswa setelah diurutkan:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
