#include <stdio.h>

// Menghitung lama bekerja
int hitung_lama_bekerja(int jam_masuk, int jam_keluar) 
{
    int lama_bekerja;

    // Jam keluar lebih besar atau sama dengan jam masuk
    if (jam_keluar >= jam_masuk) 
	{
        lama_bekerja = jam_keluar - jam_masuk;
    }
    // Jam keluar lebih kecil dari jam masuk 
    else 
	{
        lama_bekerja = (12 - jam_masuk) + jam_keluar;
    }

    return lama_bekerja;
}

int main() 
{
    int jam_masuk, jam_keluar;

    // Masukan jam masuk dan jam keluar
    printf("Masukkan jam masuk (1-12): ");
    scanf("%d", &jam_masuk);
    printf("Masukkan jam keluar (1-12): ");
    scanf("%d", &jam_keluar);

    // Menghitung dan menampilkan lama bekerja
    int lama_bekerja = hitung_lama_bekerja(jam_masuk, jam_keluar);
    printf("Lama bekerja %d jam\n", lama_bekerja);

    return 0;
}