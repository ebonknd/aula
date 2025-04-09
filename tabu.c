#include <stdio.h>
#include <stdlib.h>

int main () {
    int tabuada;
    int i;

    printf("digite um numero para a tabuada <3: ");
    scanf("%d", &tabuada);

    for (i = 1; i <=  10; i++)
    {
        printf("%d x %d = %d\n", tabuada, i, tabuada * i);
    }
    
    return 0;
}