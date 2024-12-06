#include <stdio.h>

int main() {
   
    int kecepatan = 2; 
    int waktu = 100;   
    int jarak;         

    // Menghitung jarak yang ditempuh
    jarak = kecepatan * waktu;

    
    printf("Jarak yang ditempuh setelah bersepeda selama %d detik adalah %d meter.\n", waktu, jarak);

    return 0;
}