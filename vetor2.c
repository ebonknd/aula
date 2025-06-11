#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("digite o tamanho do vetor : ");

    int N;
    scanf("%d", &N);

    int * V = (int *) malloc(N * sizeof(int));
    int soma = 0;

    for(int i = 0; 1 < N; i++)
    {
        printf("digite um numero inteiro : ");
        scanf("%d", &V[i]);
    }

    printf("o valor da soma e : %d.\n, Soma");

    return 0;
}