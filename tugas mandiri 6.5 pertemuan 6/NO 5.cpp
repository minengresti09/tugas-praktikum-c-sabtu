#include <stdio.h>

int main() {
   
    double saldo = 1000000; 
    double bunga = 0.02;    
    int bulan;             

    // Menghitung saldo setelah 10 bulan
    for (bulan = 1; bulan <= 10; bulan++) {
        saldo += saldo * bunga; // Menambahkan bunga ke saldo
    }

  
    printf("Jumlah uang setelah 10 bulan adalah: Rp. %.2f\n", saldo);

    return 0;
}