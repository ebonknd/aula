#include <stdio.h>
#include <stdlib.h>

int main() {

    system("cls");

    int inicio;
    int final;
    int i;

    printf("digite o numero inicial <3: ");
    scanf("%d", &inicio);
    printf("digite um numero final <3: ");
    scanf("%d", &final);

    for (i = inicio; i <= final; i++)
    {
      if (i % 2 == 1)
      {
        printf("%d", i);
      }      
    }     

    return 0;

 }