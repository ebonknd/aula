#include <stdio.h>
#include <stdlib.h>

int main() {

    int numero;

    printf("digite um numero de 1 a 7: ");
    scanf("%d, &numero");
    if (numero > 7)
    {
        printf("APENAS UM NUMERO DENTRE 1 A 7!");
    }
    switch (numero)
    {
    case 1:
        printf("o dia correspondente e SEGUNDA!");
        break;
    case 2:
        printf("o dia correspondente e TERCA!");
        break;
    case 3:
        printf("o dia correspondente e QUARTA!");
        break;
    case 4:
        printf("o dia correspondente e QUINTA!");
        break;
    case 5:
        printf("o dia correspondente e SEXTA!");
        break;
    case 6:
        printf("o dia correspondente e SABADO!");
        break;
    case 7:
        printf("o dia correspondente e DOMINGO!");
        break;
    }
}