#include <stdio.h>
#include <stdlib.h>

//relacionar os lados (2, 3, 4, 5) com as areas (2, 9, 16, 25)
//dominio: (2, 3, 4, 5)
//contra-dominio: (4, 9, 16, 25) (int)

//L -> A
//2 -> 4
//3 -> 9
//4 -> 16
//5 -> 25

int area(int X) {
     
    if(X == 2) return 4;
    else if(X == 3) return 9;
    else if(X == 4) return 16;
    else if(X == 5) return 25;

}

int main() {

     int L; //lado
     printf("L\t->\tA\n");
     for(L = 2; L <= 5; L++) 
     printf("%d\t->\t%d\n", L, area(L));

    return 0;
}