#include <stdio.h>
#include <stdlib.h>

int main () {

    system("cls");

    int n;  //numero de linhas (altura do trianguo <3)
    int i;
    int ast;

    printf("digite um numero positivo <3: ");
    scanf("%d", &n);

    for (i = 0, ast = 1; i < n; i++, ast = ast + 2)
    {
         printf("\n");
         int j;
         for (j = 1; j <= ast; j++)
         {
             printf("*");
         }
         
    }
    

    return 0;
}