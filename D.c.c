#include <stdio.h>

int main() 
{
    int angka;

    scanf("%d", &angka);  
    if (angka % 2 == 0) {
        printf("EVEN\n");  // Genap
    } else {
        printf("ODD\n");   // Ganjil
    }

    return 0;
}
