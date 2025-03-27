#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero;

    printf("diga um numero: ");
    scanf("%d", &numero);

    if (numero < 0)
    {
        numero = -numero;
    }
    
    switch (numero % 2)
    {
    case 0:
        printf("o numero e PAR!");
        break;
    case 1:
        printf("o numero e IMPAR!");
        break;
    }

}
