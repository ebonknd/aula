#include <stdio.h>
#include <stdlib.h>

int main() {

    char letra;
    scanf("%c", &letra);
     
     switch (letra)
     {
    case 'A':
            printf("digitada a primeira letra da palavra ARANHA!");
            break;
    case 'B':
            printf("foi digitada a primeira letra da palavra BANCO!");
            break;
    case 'C':
            printf("foi digitada a primeira letra da palavra CACHORRO!");
            break;
    default:
            printf("nao foi k=digitada a letra A, B ou C");
     }
    return 0;

}