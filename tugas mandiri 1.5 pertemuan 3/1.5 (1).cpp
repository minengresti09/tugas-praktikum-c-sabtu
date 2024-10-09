#include <stdio.h>
#include <math.h>

int main() 
{
    float alas, tinggi, luas, keliling, sisi_miring;

    // Input panjang alas dan tinggi segitiga
    printf("Input panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Input tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // luas segitiga
    luas = 0.5 * alas * tinggi;

    // Sisi Miring Pythagoras
    sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));

    // keliling segitiga
    keliling = alas + tinggi + sisi_miring;

    // hasil luas dan keliling
    printf("Luas segitiga: %.2f cm^2\n", luas);
    printf("Keliling segitiga: %.2f cm\n", keliling);

    return 0;
}