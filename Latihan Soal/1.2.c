/*Diberikan daftar bilangan berikut:
[12, 7, 5, 8, 9, 3, 10]
Pisahkan bilangan tersebut menjadi dua kelompok:
▶ Bilangan genap.
▶ Bilangan ganjil.
Tampilkan hasilnya dalam dua daftar terpisah*/

#include <stdio.h>

int main() {
    // Daftar bilangan yang diberikan
    int arr[] = {12, 7, 5, 8, 9, 3, 10};
    int n = sizeof(arr) / sizeof(arr[0]);  // Ukuran array
    int even[n], odd[n];  // Array untuk menyimpan bilangan genap dan ganjil
    int evenCount = 0, oddCount = 0;  // Variabel untuk menghitung jumlah bilangan genap dan ganjil

    // Memisahkan bilangan genap dan ganjil
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];  // Menambahkan bilangan genap
        } else {
            odd[oddCount++] = arr[i];  // Menambahkan bilangan ganjil
        }
    }

    // Menampilkan bilangan genap
    printf("Bilangan Genap: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    // Menampilkan bilangan ganjil
    printf("Bilangan Ganjil: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
