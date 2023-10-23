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


bool Bispo::verifica_posicao(int linha, int coluna){
    //verifica qual o jogador 1 ou 2
    if(this->jogador.tipo_jogador() == 1){
        //verificar se o movimenti é para frente ou para tras
        if(this->linha < linha){//movimento para frente
            int numero_casas = linha - this->linha;
            //verificar se o movimento é para a direita ou  esquerda
            if(this->coluna + numero_casas == coluna){//movimento para a direita
                return true;
            }else if(this->coluna - numero_casas == coluna){//movimento para a esquerda
                return true;
            }else{//caso o movimento seja invalido
                return false;
            }
        }else{
            int numero_casas = this->linha - linha;
            //verificar se o movimento é para a direita ou  esquerda
            if(this->coluna + numero_casas == coluna){//movimento para a direita
                return true;
            }else if(this->coluna - numero_casas == coluna){//movimento para a esquerda
                return true;
            }else{//caso o movimento seja invalido
                return false;
            }
        }
    }else{
        //verificar se o movimenti é para frente ou para tras
        if(this->linha > linha){//movimento para frente
            int numero_casas = this->linha - linha;
            //verificar se o movimento é para a direita ou  esquerda
            if(this->coluna + numero_casas == coluna){//movimento para a direita
                return true;
            }else if(this->coluna - numero_casas == coluna){//movimento para a esquerda
                return true;
            }else{//caso o movimento seja invalido
                return false;
            }
        }else{
            int numero_casas = linha - this->linha;
            //verificar se o movimento é para a direita ou  esquerda
            if(this->coluna + numero_casas == coluna){//movimento para a direita
                return true;
            }else if(this->coluna - numero_casas == coluna){//movimento para a esquerda
                return true;
            }else{//caso o movimento seja invalido
                return false;
            }
        }
    }
}
