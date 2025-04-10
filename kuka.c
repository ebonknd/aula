#include <stdio.h>

int main () {

    int numeros[5] = {2, 3, 5, 8, 13}; // o vetor (array) de interos com 5 poiçoes <3
    float temperatura[7] = {10.5, 13.6, 21.7, 21.8, 18.4, 19.0, 12.0,};
    char time[20] = {'M', 'u', 's', 'h', 'u', 'c', ' ', 'R', 'u', 'n', 'a'};
    char equipe [20] = "Mushuc Runa";

    //acessando os elementos dos vetores <3

    printf("%d %d %d %d %d\n", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4]);
    printf("%d\n", numeros[3]); //seria mostrado: 8  <3
    printf("%d\n", numeros[2] + numeros[4]); //seria mostrado: 18  <3
    printf("%.2f\n", (temperatura[3] + temperatura[5]) / 2.0); //seria mostrado: 20.40  <3
    printf("%c%c%C%c\n", time [0], time[1], time[4], time[8]); //seria mostrado: muuu  <3
    printf("%s\n", equipe); //seria mostrado: Mushuc Runa  <3

    return 0;
    
    }