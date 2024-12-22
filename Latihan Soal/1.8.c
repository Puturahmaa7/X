/*Simulasikan sistem antrian di sebuah toko dengan daftar
pelanggan berikut:
[Pelanggan 1, Pelanggan 2, Pelanggan 3]
Setiap pelanggan selesai dalam waktu 3 menit. Tampilkan urutan
pelanggan dan waktu mereka selesai (misalnya, Pelanggan 1 selesai
pada menit ke-3, Pelanggan 2 pada menit ke-6, dan seterusnya).*/

#include <stdio.h>

int main() {
    // Daftar pelanggan
    char* customers[] = {"Pelanggan 1", "Pelanggan 2", "Pelanggan 3"};
    int n = sizeof(customers) / sizeof(customers[0]);  // Jumlah pelanggan
    int serviceTime = 3;  // Waktu layanan untuk setiap pelanggan dalam menit

    // Simulasi antrian dan waktu selesai
    int totalTime = 0;  // Waktu total untuk melayani setiap pelanggan
    for (int i = 0; i < n; i++) {
        totalTime += serviceTime;  // Tambahkan waktu layanan untuk setiap pelanggan
        printf("%s selesai pada menit ke-%d\n", customers[i], totalTime);
    }

    return 0;
}
