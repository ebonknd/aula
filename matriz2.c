#include <stdio.h>

int main() {
    int M[4][5] = {
        {4, 7, 5, 3, 3}, //linha 1
        {1, 2, 9, 0, 7}, //linha 2
        {3, 0, 7, 1, 2}, //linha 3
        {8, 1, 1, 0, 0} //linha 4
    };
    int C;
    int L;
    int produto = 0;
    int soma = 0;

    //imprimindo a segunda linha da matriz

    printf("%d ", M[2][0]);
    printf("%d ", M[2][1]);
    printf("%d ", M[2][2]);
    printf("%d ", M[2][3]);
    printf("%d ", M[2][4]);

    //outra soluçao:

    printf("\n%d %d %d %d %d ", M[2][0], M[2][1], M[2][2], M[2][3], M[2][4]);

    //ultilizando for(...)

    printf("\n");
    for(C = 0; C < 5; C++)
    printf("%d ", M[2][C]);

    //exercicio: qual o valor da soma de todos os elementos da primeira linha da matriz?

    for(C = 0; C < 5; C++) 
    soma = soma + M[0][C];

    //exercicio: qual o valor do produto de todos os elementos d a coluna 1?

    for(L = 0; L < 4; L++)
    produto = produto * M[L][1];

    //exibindo toda a matriz (nao e eficiente)

    for(C = 0; C < 5; C++) printf("%d ", M[0][C]);
    printf("\n");
    for(C = 0; C < 5; C++) printf("%d ", M[1][C]);
    printf("\n");
    for(C = 0; C < 5; C++) printf("%d ", M[2][C]);
    printf("\n");
    for(C = 0; C < 5; C++) printf("%d ", M[3][C]);
    printf("\n");

    for(L = 0; L < 4; L++) //percorrer cada linha da matriz
    {
        for(C = 0; C < 5; C++) //percorrer cada coluna da matriz
        {
            printf("%d ", M[1][C]);
        }
        printf("\n");
    }

    return 0;


}