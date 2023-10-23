#include "torre.h"

Torre::Torre(int linha, int coluna, Jogador j){
    this->linha = linha;
    this->coluna = coluna;
    this->jogador = j;
    this->n_jogadas = 0;
    this->estado = true;
}


void Torre::modifica_estado(){
    this->estado = false;
}


void Torre::modifica_n_jogadas(){
    this->n_jogadas++;
}


void Torre::modifica_posicao(int linha, int coluna){
    this->linha = linha;
    this->coluna = coluna;
}


bool Torre::verifica_posicao(int linha, int coluna){
    //verifica qual o tipo de jogador 1 ou 2
    if(this->jogador.tipo_jogador() == 1){
        //verifica qual o tio de movimento
        if(this->linha < linha && this->coluna == coluna){//movimento para frente
            return true;
        }else if(this->linha > linha && this->coluna == coluna){//movimento para tras
            return true;
        }else if(this->linha == linha && this->coluna < coluna){// movimento para a direira
            return true;
        }else if(this->linha == linha && this->coluna > coluna){//movimento para a esquerda
            return true;
        }else{//caso o movimento seja invalido
            return false;
        }
    }else{
        //verifica qual o tio de movimento
        if(this->linha > linha && this->coluna == coluna){//movimento para frente
            return true;
        }else if(this->linha < linha && this->coluna == coluna){//movimento para tras
            return true;
        }else if(this->linha == linha && this->coluna < coluna){// movimento para a direira
            return true;
        }else if(this->linha == linha && this->coluna > coluna){//movimento para a esquerda
            return true;
        }else{//caso o movimento seja invalido
            return false;
        }
    }
}
