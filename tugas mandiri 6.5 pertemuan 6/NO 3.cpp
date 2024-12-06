#include <stdio.h>

int main() {
    int i;

    // Mencetak deret pangkat dua dari 1 hingga 1024
    for (i = 0; i <= 10; i++) {
        printf("%d ", 1 << i);
    }

    printf("\n");

    return 0;
}