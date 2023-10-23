#include "peao.h"
#include "jogador.h"


Peao::Peao(int linha, int coluna, Jogador j){
    this->linha = linha;
    this->coluna = coluna;
    this->jogador = j;
    this->n_jogadas = 0;
    this->estado = true;
    this->jogada_inicial = true;
}


void Peao::modifica_estado(){
    this->estado = false;
}


void Peao::modifica_n_jogadas(){
    this->n_jogadas++;
}


void Peao::modifica_posicao(int linha, int coluna){
    this->linha = linha;
    this->coluna = coluna;
}


bool Peao:: retroceder_movimento(int linha){
    if (this->jogador.tipo_jogador() == 1){
        if(this->linha > linha){
            return false;
        }else{
            return true;
        }
    }else{
        if(this->linha < linha){
            return false;
        }else{
            return true;
        }
    }
}


bool Peao::verifica_posicao(int linha, int coluna){
    //verificar qual o jogador 1 ou 2
    if(this->jogador.tipo_jogador() == 1){ //jogador 1 cima
        //verifica se o movimento é para tras
        if(retroceder_movimento(linha) == true){ // movimento para frente
            //verifica se esta andando 1 ou 2 casas
            if(this->linha + 1 == linha && this->coluna == coluna){
                return true;
            }else if(this->linha + 2 == linha && this->coluna == coluna && this->jogada_inicial == true){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        } 
    }else{ // jogador 2 baixo
        //verifica se o movimento é para tras
        if(retroceder_movimento(linha) == true){ // movimento para frente
            //verifica se esta andando 1 ou 2 casas
            if(this->linha - 1 == linha && this->coluna == coluna){
                return true;
            }else if(this->linha - 2 == linha && this->coluna == coluna && this->jogada_inicial == true){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
    }
}


void Peao::modifica_jogada_inicial(){
    this->jogada_inicial = false;
}


bool Peao::verifica_capitura(int linha, int coluna){
    //verifica se é jogador 1 ou 2
    if(this->jogador.tipo_jogador() == 1){
        // verifica se o movimento é para tras
        if(retroceder_movimento(linha) == true){
            // verifica se a capitura e para a direita ou para a esquerda
            if(this->linha + 1 == linha && this->coluna + 1 == coluna){//movimento para a direita
                return true;
            }else if(this->linha + 1 == linha && this->coluna - 1 == coluna){//movimento para a esquerda
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
    }else{
        // verifica se o movimento é para tras
        if(retroceder_movimento(linha) == true){
            // verifica se a capitura e para a direita ou para a esquerda
            if(this->linha - 1 == linha && this->coluna + 1 == coluna){//movimento para a direita
                return true;
            }else if(this->linha - 1 == linha && this->coluna - 1 == coluna){//movimento para a esquerda
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
    }
}
