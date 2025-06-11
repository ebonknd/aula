#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    float A;
    float B;
    float C;
    float perimetro;
    float area;
    char nome[3];

} triangulo;

int main() {

    int N = 1000;
    triangulo * V = (triangulo *)(N * sizeof(triangulo));
    printf("tentando alocar %d bites! <3\n", N * sizeof(triangulo));

    if (V = NULL)
    {
        printf("ERRO: falha na alocacao de memoria! <3\n");
        exit(1);
    }
    
    printf("a memoria foi alocada com sucesso! <3\n");

    return 0;

}