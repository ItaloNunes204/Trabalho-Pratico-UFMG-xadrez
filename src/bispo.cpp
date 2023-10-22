#include "bispo.h"
#include "jogador.h"


Bispo::Bispo(int linha, int coluna, Jogador j){
    this->linha = linha;
    this->coluna = coluna;
    this->jogador = j;
    this->n_jogadas = 0;
    this->estado = true;
}

void Bispo::modifica_estado(){
    this->estado = false;
}


void Bispo::modifica_n_jogadas(){
    this->n_jogadas++;
}


void Bispo::modifica_posicao(int linha, int coluna){
    this->linha = linha;
    this->coluna = coluna;
}

