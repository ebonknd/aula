#include <stdio.h>

int main() {

    int contador = 1;

    while (contador <= 5) {
    printf("%d\n", contador);
    contador =  contador + 1; // pode ser contador++
    }

    int n = 1;
    int soma = 0;

    while (n <=100) {
        soma = soma + n;
        n = n +1;
    }

    printf("a soma é %d.", soma);

    return 0;
}