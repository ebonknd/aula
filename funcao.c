//dominio + contra dominio
#include <stdio.h>
#include <stdlib.h>

//dominio = {1, 2, 3, 4, 5} (int)
//contra-dominio {A, B, C, D, E} (char)
//a funcao"f" transformara int's em char's

char f (int X) {
    char resposta;
    if (X == 1) resposta = 'C';
    else if (X == 2) resposta = 'D';
    else if (X == 3) resposta = 'E';
    else if (X == 4) resposta = 'B';
    else if (X == 5) resposta = 'E';
    
        return resposta;
}

int main () {

    char teste1 = f(4); //imprime 'B'
    printf("%c\n", teste1);
    char teste2 = f(5); //imprime 'B'
    printf("%c\n", teste2);

    return 0;
}