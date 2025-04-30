#include <stdio.h>
#include <stdlib.h>

//implementando uma funcao para calcular o perimetro de um triangulo qualquer
//perimetro (2, 4, 5) = 12
//perimetro (4, 4, 5) = 13

 float perimetro(float A, float B, float C) {
    float temp = A + B + C;
    return temp;
}

int main() {

    printf("perimetro: %.2f <3", perimetro(3, 4, 5));

return 0;
}