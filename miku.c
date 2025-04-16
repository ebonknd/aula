#include <stdio.h>
#include <stdlib.h>

int main() {

    float soma = 0.0;
    float media;
    int i;
    float temp[10];
    
    for (i = 0; i < 10; i++)
    {
        printf("digite a temperatura <3: ");
        scanf("%f", &temp[i]);
    }
    media = soma / 10.0;
    printf("a media das temperaturas e %.2f.\n", media);

    //mostrando os dias em que a temperatura foi maior do que a media <3

    for (i = 0; i < 10; i++)
    if (temp[i] > media)
     printf("%d", i);

     return 0;

}