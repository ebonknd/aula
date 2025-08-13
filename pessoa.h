#ifndef PESSOA_H
#define PESSOA_H

//dados (TAD pessoa)ID, Nome, idade

typedef struct {
    int ID;
    char nome[50];
    int idade;
} Pessoa;

//operaçoes (do TAD pessoa)

int inserirPessoa(Pessoa P); //0 para sucesso e 1 para erro
Pessoa alteraridade(Pessoa P);
void ExcluirPessoa(Pessoa P);
Pessoa alteraridade_V2(Pessoa P, int I);

//podem ser escrita varias outras operacoes


#endif