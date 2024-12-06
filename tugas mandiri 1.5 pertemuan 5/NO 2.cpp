#include <stdio.h>

int main() 
{
    int kode;
    char jenis;
    float harga, harga_setelah_diskon, diskon;

    // Input kode, jenis, dan harga
    printf("Masukkan kode: ");
    scanf("%d", &kode);
    printf("Masukkan jenis (A/B/C): ");
    scanf(" %c", &jenis); 
    printf("Masukkan harga: ");
    scanf("%f", &harga);

    // Menentukan diskon berdasarkan jenis
    if (jenis == 'A' || jenis == 'a') {
        diskon = 0.10;  // Diskon 10%
    } else if (jenis == 'B' || jenis == 'b') {
        diskon = 0.15;  // Diskon 15%
    } else if (jenis == 'C' || jenis == 'c') {
        diskon = 0.20;  // Diskon 20%
    } else {
        printf("Jenis barang tidak valid.\n");
        return 1;
    }

    // Menghitung harga setelah diskon
    harga_setelah_diskon = harga - (harga * diskon);

    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.0f\n", jenis, diskon * 100, harga_setelah_diskon);

    return 0;
}