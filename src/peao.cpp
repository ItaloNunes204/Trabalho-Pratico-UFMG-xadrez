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


void Peao::modifica_jogada_inicial(){
    this->jogada_inicial= false;
}


void Peao::modifica_n_jogadas(){
    this->n_jogadas++;
}


void Peao::modifica_posicao(int linha, int coluna){
    this->linha = linha;
    this->coluna = coluna;
}


bool Peao::verifica_posicao(int linha, int coluna){
    // verifica qual o jogador
    if(this->jogador.tipo_jogador() == 1){
        // verifica se o jogador esta andando para trás
        if(this->linha < linha){
            return false;
        }else{
            // verifica se o jogador esta andando 2 casas
            if(this->linha + 2 == linha && this->coluna == coluna && this->jogada_inicial == true){
                return true;
            }else{
                return false;
            }
            // verifica se o movimento é reto ou diagonal
            if(this->linha + 1 == linha && this->coluna == coluna){//movimento reto 
                return true;
            }else{
                // verifica se o movimento(diagonal) é para a esquerda ou pela direita
                if(this->linha + 1 == linha && this->coluna + 1 == coluna){//movimento diagonal direita 
                    return true;
                }
                else{
                    if(this->linha + 1 == linha && this->coluna - 1 == coluna){//movimento diagonal esquerda 
                        return true;
                    }
                }
            }
        }
    }else{
        // verifica se o movimento e para trás
        if(this->linha > linha){
            return false;
        }else{
            // verifica se o jogador esta andando 2 casas
            if(this->linha - 2 == linha && this->coluna == coluna && this->jogada_inicial == true){
                return true;
            }else{
                return false;
            }
            // verifica se o movimento é reto ou diagonal
            if(this->linha - 1 == linha && this->coluna == coluna){//movimento reto 
                return true;
            }else{
                // verifica se o movimento(diagonal) é para a esquerda ou pela direita
                if(this->linha - 1 == linha && this->coluna + 1 == coluna){//movimento diagonal direita 
                    return true;
                }
                else{
                    if(this->linha - 1 == linha && this->coluna - 1 == coluna){//movimento diagonal esquerda 
                        return true;
                    }
                }
            }
        }

    } 
}
