#include <stdio.h>

int main ()
{
	int bilangan;
	
	// Bilangan bulat positif
	printf("Input sebuah bilangan bulat positif: ");
	scanf("%d", &bilangan);
	
	// Bilangan ganjil atau genap 
	if (bilangan % 2 == 0) {
		printf("GENAP\n");
	} else {
		printf("GANJIL\n");
	}
	
	return 0;
}