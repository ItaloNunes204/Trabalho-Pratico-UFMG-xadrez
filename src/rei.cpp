#include "rei.h"

Rei::Rei(int linha, int coluna, Jogador j){
    this->linha = linha;
    this->coluna = coluna;
    this->jogador = j;
    this->n_jogadas = 0;
    this->estado = true;
}

void Rei::modifica_estado(){
    this->estado = false;
}

void Rei::modifica_n_jogadas(){
    this->n_jogadas++;
}

void Rei::modifica_posicao(int linha, int coluna){
    this->linha = linha;
    this->coluna = coluna;
}

bool Rei::verifica_posicao(int linha, int coluna){
    //verifica qual o tipo de jogador
    if(this->jogador.tipo_jogador() == 1){
        //verificar qual o tipo de movimento
        if(this->linha + 1 == linha && this->coluna == coluna){//movimento para frente
            return true;
        }else if(this->linha - 1 == linha && this->coluna == coluna){//movimento para tras
            return true;
        }else if(this->linha == linha && this->coluna < coluna){//movimento para a direira
            return true;
        }else if(this->linha == linha && this->coluna > coluna){//movimento para a esquerda
            return true;
        }else if(this->linha + 1 == linha && this->coluna + 1 == coluna){//movimento diagonal direira frente
            return true;
        }else if(this->linha - 1 == linha && this->coluna + 1 == coluna){//movimento diagonal direira tras
            return true;
        }else if(this->linha + 1 == linha && this->coluna - 1 == coluna){//movimento diagonal esquerda frente
            return true;
        }else if(this->linha - 1 == linha && this->coluna + 1 == coluna){//movimento diagonal esquerda tras
            return true;
        }else{//cado o movimento seja invalido
            return false;
        }
    }else{
        //verificar qual o tipo de movimento
        if(this->linha - 1 == linha && this->coluna == coluna){//movimento para frente
            return true;
        }else if(this->linha + 1 == linha && this->coluna == coluna){//movimento para tras
            return true;
        }else if(this->linha == linha && this->coluna < coluna){//movimento para a direira
            return true;
        }else if(this->linha == linha && this->coluna > coluna){//movimento para a esquerda
            return true;
        }else if(this->linha - 1 == linha && this->coluna + 1 == coluna){//movimento diagonal direira frente
            return true;
        }else if(this->linha + 1 == linha && this->coluna + 1 == coluna){//movimento diagonal direira tras
            return true;
        }else if(this->linha - 1 == linha && this->coluna - 1 == coluna){//movimento diagonal esquerda frente
            return true;
        }else if(this->linha + 1 == linha && this->coluna + 1 == coluna){//movimento diagonal esquerda tras
            return true;
        }else{//cado o movimento seja invalido
            return false;
        }
    }
}