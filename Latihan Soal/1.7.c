/*Diberikan data barang berikut:
[(Buku, 20),(Pensil, 50),(Penghapus, 15)]
Hitung total barang yang tersedia. Tambahkan barang baru
(Bolpoin, 30) dan hitung ulang total barang.*/

#include <stdio.h>

int main() {
    // Daftar barang dan jumlahnya
    char* items[] = {"Buku", "Pensil", "Penghapus"};
    int quantities[] = {20, 50, 15};
    int n = sizeof(quantities) / sizeof(quantities[0]);  // Jumlah barang

    // Hitung total barang yang tersedia
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += quantities[i];
    }

    // Tampilkan total barang yang tersedia
    printf("Total barang yang tersedia: %d\n", total);

    // Tambahkan barang baru
    char* newItem = "Bolpoin";
    int newQuantity = 30;

    // Menambahkan barang baru ke dalam daftar
    items[n] = newItem;
    quantities[n] = newQuantity;
    n++;  // Jumlah barang bertambah

    // Hitung ulang total barang setelah penambahan
    total = 0;
    for (int i = 0; i < n; i++) {
        total += quantities[i];
    }

    // Tampilkan total barang yang tersedia setelah penambahan
    printf("Total barang setelah penambahan: %d\n", total);

    return 0;
}
