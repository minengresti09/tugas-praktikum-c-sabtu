#include <stdio.h>
#define PI 3.14159

int main() 
{
    float diameter = 15.0;
    float jari_jari, volume;

    // Menghitung jari-jari (diameter dibagi 2)
    jari_jari = diameter / 2;

    // Rumus volume bola
    volume = (4.0 / 3.0) * PI * jari_jari * jari_jari * jari_jari;
    
    printf("Volume bola dengan diameter %.2f cm adalah: %.2f cm^3\n", diameter, volume);

    return 0;
}