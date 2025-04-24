#include <stdio.h>
#include <stdlib.h>

int main () {

    int M[4][4];
    int i; //para percorrer as linhas da matriz (0, 1, 2, 3)
    int j; //para percorrer as colunas (0, 1, 2, 3)

    for(i = 0; i <4; i++){
        for(j = 0; j < 4; j++){
            printf("elemento [%d][%d]:  ",1, j);
            scanf("%d", &M[i][j]);
        }
    }

    int traco = 0;
    for(i = 0; i < 4 ; i++) traco = traco + M[1][1];
    printf("traco de M: %d\n", traco);

    return 0;

}