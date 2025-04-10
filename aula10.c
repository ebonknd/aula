#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(NULL));
    int magic = rand () % 1001;
    int palpite;

    printf ("digite um número inteiro: ");
    scanf ("%d", &palpite);

    if (palpite == magic)
    {
        printf("voce acertou <3\n");
        printf("o numero era: %d", magic);
    }
    else if (palpite < magic)
    {
        printf("seu numero e menor <3\n");
        printf("o numero era: %d", magic);
    }
    else if (palpite > magic)
    {
        printf("seu numero e maior <3\n");
        printf("o numero era: %d", magic);
    }
    
    

}

https://gartic.io/022IRDCB
