/*Tuliskan algoritma untuk mengecek apakah sebuah kata adalah
palindrom (dibaca sama dari depan dan belakang). Contoh:
▶ Input: katak → Output: Palindrom.
▶ Input: rumah → Output: Bukan Palindrom*/

#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int length, isPalindrome = 1;

    // Input kata dari pengguna
    printf("Masukkan kata: ");
    scanf("%s", word);

    // Menentukan panjang kata
    length = strlen(word);

    // Mengecek apakah kata tersebut palindrom
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            isPalindrome = 0;  // Jika ada pasangan yang tidak cocok
            break;
        }
    }

    // Menampilkan hasil
    if (isPalindrome) {
        printf("Palindrom.\n");
    } else {
        printf("Bukan Palindrom.\n");
    }

    return 0;
}
