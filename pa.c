#include <stdio.h>
#include <stdlib.h>

//A: e oprimeiro termo da progressao <3
//R: raozao e o numero (ou diminuicao) de um termo para o seguinte <3
//N: e a posicao do termo a ser calculado <3
//PA: determina o termo que esta na posicao N <3

float PA(float A, float R, int N) {

    float resposta = A;
    for (int i = 2; i <= N; i++) resposta = resposta + R;

    return resposta;
}

int main() {

    float T1 = PA(2, 4, 5);
    printf("teste 1: %.2f <3\n", T1);

    float T2 = PA(2, 4, 7);
    printf("teste 2: %.2f <3\n", T2);

    printf("teste 3: %2.f <3\n", PA(1, 2, 10));
    printf("teste 4: %2.f <3\n", PA (3, 7, 1));

    return 0;
}