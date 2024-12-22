/*Diberikan daftar barang berikut dengan harga:
[(Buku, 100),(Pensil, 20),(Penghapus, 10),(Bolpoin, 50)]
Anda memiliki anggaran sebesar 120. Pilih barang-barang yang
bisa dibeli tanpa melebihi anggaran. Jelaskan algoritma Anda.*/

#include <stdio.h>

int main() {
    // Daftar barang dan harga
    char* items[] = {"Buku", "Pensil", "Penghapus", "Bolpoin"};
    int prices[] = {100, 20, 10, 50};
    int budget = 120;  // Anggaran yang tersedia
    int n = sizeof(prices) / sizeof(prices[0]);  // Jumlah barang
    int totalSpent = 0;  // Total pengeluaran
    printf("Barang yang bisa dibeli:\n");

    // Proses memilih barang yang bisa dibeli
    for (int i = 0; i < n; i++) {
        if (prices[i] <= budget) {  // Jika harga barang masih dalam anggaran
            printf("%s (Harga: %d)\n", items[i], prices[i]);
            budget -= prices[i];  // Kurangi anggaran dengan harga barang
            totalSpent += prices[i];  // Tambahkan harga barang ke total pengeluaran
        }
    }

    // Tampilkan total pengeluaran
    printf("\nTotal pengeluaran: %d\n", totalSpent);
    printf("Sisa anggaran: %d\n", budget);

    return 0;
}
