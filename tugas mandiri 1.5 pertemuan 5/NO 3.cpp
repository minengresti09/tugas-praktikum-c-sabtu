#include <stdio.h>

int hitung_lama_parkir(int jam_masuk, int jam_keluar) 
{
    // Menghitung lama parkir
    if (jam_keluar >= jam_masuk) {
        return jam_keluar - jam_masuk;
    } else {
        return (12 - jam_masuk) + jam_keluar;
    }
}

int hitung_biaya_parkir(int lama_parkir) {
    int biaya;
    if (lama_parkir <= 2) {
        biaya = 2000; 
    } else {
        biaya = 2000 + (lama_parkir - 2) * 500;
    }
    return biaya;
}

int main() {
    int jam_masuk, jam_keluar;

    // Masukan jam masuk dan jam keluar
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jam_masuk);
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jam_keluar);

    // Menghitung lama parkir
    int lama_parkir = hitung_lama_parkir(jam_masuk, jam_keluar);

    // Menghitung biaya parkir
    int biaya_parkir = hitung_biaya_parkir(lama_parkir);

    printf("Lama parkir: %d jam, Biaya parkir: %d\n", lama_parkir, biaya_parkir);

    return 0;
}