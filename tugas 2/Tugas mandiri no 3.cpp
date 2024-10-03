#include <stdio.h>
#include <math.h>

int main() 
{   
    float alas = 4.0;
    float tinggi = 5.0;
    float sisi_miring;

    // Rumus Phitagoras
    sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));

    printf("Sisi miring segitiga dengan alas %.2f cm dan tinggi %.2f cm adalah: %.2f cm\n", alas, tinggi, sisi_miring);

    return 0;
}