#include <stdio.h>
#include <stdlib.h>

int main () {

    int numeros[5] = {2, 3, 5, 8, 13}; //etor (array) de inteiros com 5 posicoes
    int i;

    //acessando os elementos dos vetores

    for(i = 0; i <= 4; i++) //mostrar todos os numeros do vetorm'numeros' 
    {
        printf("%d\n", numeros[i]);
    }

    prinf("---- ---- ---- ----\n");

    for (i = 0; i <= 4; i++) //mostrar todos os numeros do vetor 'numeros' + endereco de memoria
    {
         prinf("%d \t %d \n", numeros[i], &numeros[i]);
    }

    //observacao:
    //&nmeros[i]: . . . endereco de memoria da variavel numeros[i].
    //%p: mostra o resultado como hexadecimal.

    printf("---- ---- ---- ----\n");

    for (i = 0; i <= 4; i++) //mostra todos os resultads do vetor 'nemero' + endreco de memoria + %x / %p
    {
         printf("%d \t %d \t %x \n", numeros[i], &numeros[i], &numeros[i]);
    }
    
    return 0;
}