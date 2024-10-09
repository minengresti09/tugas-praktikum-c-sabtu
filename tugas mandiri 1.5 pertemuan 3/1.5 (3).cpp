#include <stdio.h>
#include <math.h>

int main()
{
	float alas, tinggi, sisi_miring;
	
	//Panjang alas dan tinggi
	printf("Input panjang sisi alas segitiga (cm): ");
	scanf("%f", &alas);
	printf("Input panjang sisi tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	//Sisi miring
	sisi_miring = sqrt((alas * alas) + (tinggi * tinggi));
	
	//Hasil
	printf("Panjang sisi miring segitiga: %.2f cm\n", sisi_miring);
	
	return 0;
} 