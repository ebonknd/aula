#include <stdio.h>
#include <stdlib.h>
#include "pessoa.h"

Pessoa alteraridade(Pessoa P) {
    P.idade = P.idade + 1;
    return P;
}

Pessoa alteraridade_v2(Pessoa P, int I) {
    P.idade = I;
    return P;
}