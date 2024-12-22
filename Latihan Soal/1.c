/* Diberikan berat barang W = [w1,w2, . . . , wn] dan kapasitas
maksimal kantong C. Tugas Anda adalah mengelompokkan
barang-barang tersebut ke dalam jumlah kantong seminimal
mungkin sehingga:
▶ Total berat barang di setiap kantong ≤ C.
▶ Semua barang dimasukkan ke dalam kantong.
Contoh: Masukan: W = [2, 3, 5, 8], C = 10 Keluaran: 2 kantong */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int W[] = {2, 3, 5, 8};
    int C = 10;
    int n = sizeof(W) / sizeof(W[0]);

    bool used[n];
    for (int i = 0; i < n; i++) {
        used[i] = false;
    }

    int bagCount = 0;

    for (int i = 0; i < n; i++) {
        if (used[i]) {
            continue;
        }

        int currentWeight = W[i];
        used[i] = true;

        for (int j = i + 1; j < n; j++) {
            if (!used[j] && currentWeight + W[j] <= C) {
                currentWeight += W[j];
                used[j] = true;
            }
        }

        bagCount++;
    }

    printf("Jumlah kantong minimal: %d\n", bagCount);

    return 0;
}