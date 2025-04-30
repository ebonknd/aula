#include <stdio.h>
#include <stdlib.h>

//relacionar os lados (2, 3, 4, 5) com as areas (2, 9, 16, 25)
//dominio: (2, 3, 4, 5)
//contra-dominio: (4, 9, 16, 25) (int)

int area(int X) {
    int resposta;
    if(X == 2) resposta = 4;
    else if(X == 3) resposta = 9;
    else if(X == 4) resposta = 16;
    else if(X == 5) resposta = 25;

    return resposta;
}

int main() {

    int L = 3; //lado
    int A = area(L);
    printf("area do quadrado de lado %d e %d! <3\n", L, A);

    return 0;
}