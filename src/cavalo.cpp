#include "cavalo.h"

Cavalo :: Cavalo(int linha, int coluna, Jogador j){
    this->linha = linha;
    this->coluna = coluna;
    this->jogador = j;
    this->n_jogadas = 0;
    this->estado = true;
}

void Cavalo::modifica_estado(){
    this->estado = false;
}

void Cavalo::modifica_n_jogadas(){
    this->n_jogadas++;
}

void Cavalo::modifica_posicao(int linha, int coluna){
    this->linha = linha;
    this->coluna = coluna;
}

bool Cavalo::verifica_posicao(int linha, int coluna){
    // verifica qual o jogador
    if(this->jogador.tipo_jogador() == 1){
        // verifica
    }else{

    }
}
