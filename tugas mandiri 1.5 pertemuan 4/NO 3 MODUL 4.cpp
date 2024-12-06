#include <stdio.h>

int main() 
{
  int N;

  printf("Input Bilangan: ");
  scanf("%d", &N);

  if (N > 50) {
    N = N - 25;
	}
    N = N + 10;
  

  printf("Hasil: %d\n", N);

  return 0;
}
//Hasil setelah di Input
//a.30 = 40
//b.50 = 60
//c.65 = 50