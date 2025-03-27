#include <stdio.h>
#include <stdlib.h>

int main() {

    char operador;
    int numero;

    printf("quer fazer conta de que? [+, -, *, /]");
    scanf("%c", &operador);

    switch (operador)
    {
    case '+':
        printf("digite os numeros para somar")
        break;
    
    default:
        break;
    }
}