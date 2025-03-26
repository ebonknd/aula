#include <stdio.h>

int main() {

    float P; // peso
    float H; // altura
    float IMC; // indice de massa corporal

    printf ("digite peso(em kg) e altura(em m:)  ");
    scanf ("%f %f", &P, &H);
    IMC = P / (H * H);

    if (IMC >= 40) {
        printf("a pessoa tem obesidade morbida!\n");
    }
    else {
        printf("a pessoa nao tem IMC maor ou igual a 40!!!\n");
    }
    //voto

    int idade;
    printf("Digite a idade:  ");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 69)
    {
        printf("Para a idade, voto obrigatorio\n");
    }
    else
    {
        printf("Para a idade, voto nao obrigatorio\n");
    }

    //intervalo

    float a, b, c; //limites do intervalo e verificar o intervalo 
    printf("digite os limites do intervalo:  ");
    scanf("%f %f", &a, &b);
    printf("digite o valor de X:  ");
    scanf("%f", &c);

    if(c >= a &&  c <= b) {
        printf("%f pertebce a [%f,%f].\n", c, a, b);
    }
    else {
        printf("%f pertebce a [%f,%f].\n", c, a, b);
    }

    // nota conceito

    float nota;
    char conceito;

    printf("digite a nota: ");
    scanf("%f", &nota);

    if(nota >= 9) {
        conceito = 'A';
    }
    else if (nota >= 7 && nota < 9 ) {
        conceito = 'B';
    }
    else if (nota >= 5 && nota < 7)
    {
        conceito = 'C';
    }
    else if (nota < 5)
    {
        conceito = 'D';
    }
    printf ("Seu conceito é %c", conceito);

    return 0;
    }