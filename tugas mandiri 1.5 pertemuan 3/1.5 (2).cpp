#include <stdio.h>

int main() 
{
	int celcius;
	float fahrenheit, reamur;
	
	//Suhu dalam celcius
	printf("Input suhu dalam Celcius: ");
	scanf("%d", &celcius);
	
	// Suhu dalam fahrenheit
	fahrenheit = (celcius * 9.0 / 5.0) + 32;
	
	// Suhu dalam reamur
	reamur = celcius * 4.0 / 5.0;
	
	// Hasil
	printf("Suhu dalam fahrenheit: %.2f F\n", fahrenheit);
	printf("Suhu dalam reamur: %.2f R\n", reamur);
	
	return 0;
}